/*
	FileToString：
		Description:文件输入
		return：
			1.fque：目标队列 
		about：
			1.prc/F/转化操作	 
	ToStringQueue：
		Description:获得工作队列
		return:
			1.wque:工作队列 
			2.单个error字符串：报错 
		about：
			1.error/F/报错 
				
*/

#ifndef SCAN_H
#define SCAN_H

#include<string>
using std::string;
#include<queue>
using std::queue;
#include<iostream>
using std::cout;
using std::endl;
#include<fstream>
using std::ifstream;

class Scan
{
	public:
		queue<string> FileToString(string finput);
		queue<string> ToStringQueue(string input);
	protected:
		int prc(char* s,int n);
		void error();
		queue<string> wque; 
		queue<string> fque;
		
};

#endif
