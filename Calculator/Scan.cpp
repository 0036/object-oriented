#include "Scan.h"

queue<string> Scan::FileToString(string finput){
	while(!Fque.empty()) Fque.pop();
	
	prc(&finput[0],finput.size());	
	fstream file(finput.c_str());	
	string a;
	while(!file.eof()){
		file>>a;
		Fque.push(a);
	}
	file.close();
	return Fque;
}

queue<string> Scan::ToStringQueue(string input){
	while(!Wque.empty()) Wque.pop();
	
	int k=1,s=0,kk; 
	string t;
	int n=input.size();
	for(int i=0;i<n-1;){
		if( (input[i]<='9'&&input[i]>='0')||input[i]=='.' ){
			kk=0;
			t=input[i];
			i++;
			if(t=="."){
				Error(5);
				return Wque;
			}
			while( ((input[i]<='9'&&input[i]>='0')||input[i]=='.') &&i<n){
				if(input[i]=='.'){
					if(kk>0){
						Error(5);
						return Wque;
					}else kk++;
				}
				t+=input[i];
				i++;
			}
			k=0;		
			if(t.size()>10){
				Error(1);
				return Wque;
			} else{
				Wque.push(t);
			}
		}else if(input[i]=='+'||input[i]=='-'||input[i]=='*'||input[i]=='/'||input[i]=='('||input[i]==')'){
			t=input[i];
			if(t=="("){
				s++;
				k=1;
			}else if(t==")"){
				s--;
				if(s<0){
					Error(3);
					return Wque; 
				}
				k=0;
			}else if(k==1){
				if(t!="-"){
					Error(4);
					return Wque;
				}else k=2;
			}else if(k==2){
				Error(4);
				return Wque;
			}else k=1;
			//判断合法性 
			Wque.push(t);
			i++;
		}else{
			Error(2);
			return Wque;
		}
	}
	if(k!=0){
		Error(4);
	}else if(s>0){
		Error(3);
	}
	if(input[n-1]!='='){
		Error(0);
	}
	return Wque;
}

int Scan::prc(char* s,int n){
	for(int i=0;i<n;i++){
		if(s[i]=='\\') s[i]='/';
	}
	return 1;
}

int Scan::Error(int i){
	while(!Wque.empty()) Wque.pop();
	if(i==1){
		Wque.push("error01:输入的数字超过10位");
	}else if(i==2){
		Wque.push("error02:输入不合法字符");
	}else if(i==3){
		Wque.push("error03:输入括号不匹配");	
	}else if(i==4){
		Wque.push("error04:输入运算符不合法");	
	}else if(i==5){
		Wque.push("error05:输入数字不合法");
	}else if(i==0){
		Wque.push("error00:输入无等号");
	}
	return i;
}

