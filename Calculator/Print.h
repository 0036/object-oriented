/*
	PutAns:
		Description:非文件输出
	AnsToFile：
		Description:文件输出 
		About:	
			1.prc/F/转化操作	
	PutStringQueue：
		Description:输出队列 
*/

#ifndef PRINT_H
#define PRINT_H

#include<string>
using std::string;
#include<queue>
using std::queue;
#include<iostream>
using std::cout;
using std::endl;
#include<fstream>
using std::ofstream;

class Print
{
	public:
		void PutAns(string ans,string input);
		void PutAns(string ans);	
		void PutStringQueue(queue<string> wque);
		void AnsToFile(queue<string> fque,string foutput);
	protected:
		void prc(char* s,int n);
};

#endif
