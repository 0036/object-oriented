/*
	AnsToFile：
		Description:文件输出 
		return:
			1.1:正常返回  
		about： 
			1.prc/F/转化操作 
	PutStringQueue：
		Description:输出队列 
		return:
			1.1:正常返回 
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
using std::fstream;

class Print
{
	public:
		int PutStringQueue(queue<string> Wque);
		int AnsToFile(queue<string> Fque,string foutput);
	protected:
		int prc(char* s,int n);
};

#endif
