#include "Calculation.h"

string Calculation::GetAns(queue<string> wque){
	while(!sd.empty()) sd.pop();
	while(!sc.empty()) sc.pop();
	string str;
	str=wque.front();
	if(str[0]=='e') return str;
	
	stringstream sstr;
	double d;
	char c;
	char k;
	sc.push('(');
	while(!wque.empty()){
		sstr.clear();
		sstr.str("");
		sstr<<wque.front();
		str=sstr.str(); 
		wque.pop();
		if( str[0]<='9'&&str[0]>='0' ){
			sstr>>d;
			sd.push(d);
			k=')';
		}else{
			sstr>>c;
			if(c=='-'&&k!=')') k=cal('_');
			else{
				k=cal(c);
				if(k=='e'){
					error();
					return "error:±»³ýÊýÎª0"; 
				} 
			} 
		}
	}
	cal(')');
	
	sstr.clear();
	sstr.str("");
	sstr<<sd.top();
	str=sstr.str();
	return str;
}

void Calculation::error(){
	while(!sd.empty()) sd.pop();
	while(!sc.empty()) sc.pop();	
};

int Calculation::getc(char c){
	if(c=='_') return 3;
	else if(c=='+') return 1;
	else if(c=='-') return 1;
	else if(c=='*') return 2;
	else if(c=='/') return 2;
	else return 0;
}

char Calculation::cal(char c){ 	
	if(c=='('){
		sc.push('(');
		return '(';
	}
	double a,b;
	char t=sc.top();	
	while(getc(c)<=getc(t)){ 		
		if(t=='_'){
			a=sd.top();
			sd.pop();
			sd.push(-a);
			sc.pop();
		}
		if(t=='+'){
			a=sd.top();
			sd.pop();
			b=sd.top();
			sd.pop();
			sd.push(a+b);
			sc.pop();
		}
		if(t=='-'){
			a=sd.top();
			sd.pop();
			b=sd.top();
			sd.pop();
			sd.push(b-a);
			sc.pop();
		}
		if(t=='*'){
			a=sd.top();
			sd.pop();
			b=sd.top();
			sd.pop();
			sd.push(a*b);
			sc.pop();
		}
		if(t=='/'){
			a=sd.top();
			sd.pop();
			b=sd.top();
			sd.pop();
		//	if(a==0){
		//		return 'e';
		//	}
			sd.push(b/a);
			sc.pop();	
		}
		if(t=='('){
			sc.pop();
			return c;
		} 
		if(sc.empty()) break;
		t=sc.top();
	}
	sc.push(c);	
	return c;	
}
