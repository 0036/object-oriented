#include "Scan.h"

#include<cstdio>

queue<string> Scan::ToStringQueue(string input){
	string t;
	int n=input.size();
	for(int i=0;i<n;){
		if( (input[i]<='9'&&input[i]>='0')||input[i]=='.' ){
			t="";
			while( ((input[i]<='9'&&input[i]>='0')||input[i]=='.') &&i<n){
				t+=input[i];
				i++;
			}
			if(t.size()>10){
				printf("\nerror:输入的数字超过10位");
				while(!Wque.empty()) Wque.pop();
				return Wque;
				//  报错1 
			}else Wque.push(t);
		}else{
			t=input[i];
			Wque.push(t);
			i++;
		}
	}
	return Wque;
}

