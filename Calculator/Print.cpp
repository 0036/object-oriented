#include "Print.h"

int Print::AnsToFile(queue<string> Fque,string foutput){
	
	prc(&foutput[0],foutput.size());	
	fstream file(foutput.c_str());	
	while(!Fque.empty()){
		file<<Fque.front()<<endl;
		Fque.pop();
	}
	file.close();
	
	return 1;
};

int Print::PutStringQueue(queue<string> Wque){
	while(!Wque.empty()){
		cout<<Wque.front()<<endl;
		Wque.pop();
	}
	return 1;
};

int Print::prc(char* s,int n){
	for(int i=0;i<n;i++){
		if(s[i]=='\\') s[i]='/';
	}
	return 1;
}
