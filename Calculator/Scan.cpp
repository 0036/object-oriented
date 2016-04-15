#include "Scan.h"

queue<string> Scan::ToStringQueue(string input){
	int k=1,s=0,kk; 
	string t;
	int n=input.size();
	for(int i=0;i<n;){
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
			}
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
	return Wque;
}

int Scan::Error(int i){
	if(i==1){
		cout<< "\nerror01:输入的数字超过10位" << endl;
		while(!Wque.empty()) Wque.pop();
	}else if(i==2){
		cout<< "\nerror02:输入不合法字符" << endl;
		while(!Wque.empty()) Wque.pop();		
	}else if(i==3){
		cout<< "\nerror03:输入括号不匹配" << endl;
		while(!Wque.empty()) Wque.pop();		
	}else if(i==4){
		cout<< "\nerror04:输入运算符不合法" << endl;
		while(!Wque.empty()) Wque.pop();		
	}else if(i==5){
		cout<< "\nerror05:输入数字不合法" << endl;
		while(!Wque.empty()) Wque.pop();		
	}
	
	return i;
}

