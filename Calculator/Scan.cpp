#include "Scan.h"

#include<cstdio>

queue<string> Scan::ToStringQueue(string input){
	string t;
	int n=input.size();
	for(int i=0;i<n;){
		if( (input[i]<='9'&&input[i]>='0')||input[i]=='.' ){//���ִ��� 
			t="";
			while( ((input[i]<='9'&&input[i]>='0')||input[i]=='.') &&i<n){
				t+=input[i];
				i++;
			}
			
			if(t.size()>10){
				printf("\nerror:��������ֳ���10λ");
				while(!q.empty()) q.pop();
				return q;
				//���� 
			}else q.push(t);
		}else{//�����ִ��� 
			t=input[i];
			q.push(t);
			i++;
		}
	}
	
	return q;
}
