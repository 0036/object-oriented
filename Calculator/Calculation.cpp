#include "Calculation.h"

double Calculation::GetAns(queue<string> Wque){
	stringstream sstr;
	int d;
	char c;
	string str;
	char k;
	sc.push('(');
	while(!Wque.empty()){
		sstr.clear();
		sstr.str("");
		sstr<<Wque.front();
		str=sstr.str();
		Wque.pop();
		if( str[0]<='9'&&str[0]>='0' ){
			sstr>>d;
			sd.push(d);
			k=')';
		}else{
			sstr>>c;
			if(c=='-'&&k!=')') cal('_');
			else cal(c);
			k=c;
		}
	}
	cal(')');
	return sd.top();
}

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
