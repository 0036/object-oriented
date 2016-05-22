/*
	GetAns：
		Description:得到算式结果 
		return:
			1.算式结果string:正常返回 
		about： 
			1.cal/F/核心计算步骤 
			2.getc/F/获得符号优先级 
			3.sd/stack/暂存数字及中间值 
			4.sc/stack/暂存符号 
			5.error/F/报错 
*/

#ifndef CALCULATION_H
#define CALCULATION_H

#include<queue>
using std::queue;
#include<string>
using std::string;
#include<stack>
using std::stack;
#include<sstream>
using std::stringstream;

class Calculation
{
	public:
		string GetAns(queue<string> wque);
	protected:
		void error();
		char cal(char c);
		int getc(char c);
		stack<double> sd;
		stack<char> sc;
};

#endif
