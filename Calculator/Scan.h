/*
	
*/

#ifndef SCAN_H
#define SCAN_H

#include<string>
using std::string;
#include<queue>
using std::queue;

class Scan
{
	public:
		queue<string> ToStringQueue(string input);
	protected:
		queue<string> Wque; //工作队列 
};

#endif
