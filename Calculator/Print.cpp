#include "Print.h"

void Print::PutAns(string ans){
	cout<<ans<<endl;
};

void Print::PutAns(string ans,string input){
	cout<<input<<" "<<ans<<endl;
};

void Print::AnsToFile(queue<string> fque,string foutput){
	
	prc(&foutput[0],foutput.size());	
	ofstream file(foutput.c_str());	
	while(!fque.empty()){
		file<<fque.front()<<endl;
		fque.pop();
	}
	file.close();
	
};

void Print::PutStringQueue(queue<string> wque){
	while(!wque.empty()){
		cout<<wque.front()<<endl;
		wque.pop();
	}
};

void Print::prc(char* s,int n){
	for(int i=0;i<n;i++){
		if(s[i]=='\\') s[i]='/';
	}
}
