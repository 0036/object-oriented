/*
	FileToString：
		Description:文件输入
		return：
			1.Fque：目标队列 
		about：
			1.prc/F/转化操作	 
	ToStringQueue：
		Description:获得工作队列
		return:
			1.Wque:工作队列 
			2.单个error字符串：报错 
		about：
			1.Error/F/报错 
				
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
using std::fstream;

class Scan
{
	public:
		queue<string> FileToString(string finput);
		queue<string> ToStringQueue(string input);
	protected:
		int prc(char* s,int n);
		int Error(int i);
		queue<string> Wque; 
		queue<string> Fque;
		
};

#endif
