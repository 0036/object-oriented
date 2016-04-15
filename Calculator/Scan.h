/*
	ToStringQueue：
		Description:获得工作队列
		input:整串string的输入算式
		output:工作队列 
		return:
			工作队列:正常返回
			空队列:数字超过十位	
	Error:
		Description:报错 
		input:报错类型，int 
		output:错误 
		return:
			输入int:正常返回			
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

class Scan
{
	public:
		queue<string> ToStringQueue(string input);
		int Error(int i);
	protected:
		queue<string> Wque; //工作队列 
};

#endif
