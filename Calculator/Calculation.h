/*
	GetAns：
		Description:得到算式结果 
		input:工作队列 
		output:算式结果，double 
		return:
			算式结果:正常返回 
	cal： 
		Description:辅助GetAns，计算核心步骤 
		input:符号，由sc 
		output:中间值，传入sd 
		return:
			传入char:正常返回 
	getc： 
		Description:辅助cal，获得符号优先级
		input:符号，char 
		output:优先级，int
		return:
			0:'(',')'
			1:'+','-'
			2:'*','/'
			3'_' 
	sd:stack/暂存数字及中间值 
	sc:stack/暂存符号 
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
		double GetAns(queue<string> Wque);
	protected:
		char cal(char c);
		int getc(char c);
		stack<double> sd;
		stack<char> sc;
};

#endif
