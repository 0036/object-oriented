/*
	PutStringQueue：
		Description:输出队列 
		input:工作队列 
		output:逐个输出队列元素，一行一个 
		return:
			0:正常返回 
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

class Print
{
	public:
		int PutStringQueue(queue<string> Wque);
	protected:
};

#endif
