#include "Scan.h"

#include<cstdio>

queue<string> Scan::ToStringQueue(string input){
	string t;
	int n=input.size();
	for(int i=0;i<n;){
		if( (input[i]<='9'&&input[i]>='0')||input[i]=='.' ){//数字处理 
			t="";
			while( ((input[i]<='9'&&input[i]>='0')||input[i]=='.') &&i<n){
				t+=input[i];
				i++;
			}
			
			if(t.size()>10){
				printf("\nerror:输入的数字超过10位");
				while(!q.empty()) q.pop();
				return q;
				//报错 
			}else q.push(t);
		}else{//非数字处理 
			t=input[i];
			q.push(t);
			i++;
		}
	}
	
	return q;
}

