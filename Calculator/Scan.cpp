#include "Scan.h"

queue<string> Scan::FileToString(string finput){
	while(!fque.empty()) fque.pop();
	
	prc(&finput[0],finput.size());	
	ifstream file(finput.c_str());	
	string a;
	while(!file.eof()){
		file>>a;
		fque.push(a);
	}
	file.close();
	return fque;
}

queue<string> Scan::ToStringQueue(string input){
	while(!wque.empty()) wque.pop();
	
	int k=1,s=0,kk; 
	string t;
	int n=input.size();
	for(int i=0;i<n-1;){
		if( (input[i]<='9'&&input[i]>='0')||input[i]=='.' ){
			kk=0;
			t=input[i];
			i++;
			if(t=="."){
				error();
				return wque;
			}
			while( ((input[i]<='9'&&input[i]>='0')||input[i]=='.') &&i<n){
				if(input[i]=='.'){
					if(kk>0){
						error();
						return wque;
					}else kk++;
				}
				t+=input[i];
				i++;
			}
			k=0;		
			if(t.size()>10){
				error();
				return wque;
			} else{
				wque.push(t);
			}
		}else if(input[i]=='+'||input[i]=='-'||input[i]=='*'||input[i]=='/'||input[i]=='('||input[i]==')'){
			t=input[i];
			if(t=="("){
				s++;
				k=1;
			}else if(t==")"){
				s--;
				if(s<0){
					error();
					return wque; 
				}
				k=0;
			}else if(k==1){
				if(t!="-"){
					error();
					return wque;
				}else k=2;
			}else if(k==2){
				error();
				return wque;
			}else k=1;
			wque.push(t);
			i++;
		}else{
			error();
			return wque;
		}
	}
	if(k!=0){
		error();
	}else if(s>0){
		error();
	}
	if(input[n-1]!='='){
		error();
	}
	return wque;
}

int Scan::prc(char* s,int n){
	for(int i=0;i<n;i++){
		if(s[i]=='\\') s[i]='/';
	}
	return 1;
}

void Scan::error(){
	while(!wque.empty()) wque.pop();
	wque.push("error:输入不合法");

}

