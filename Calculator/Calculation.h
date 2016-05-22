/*
	GetAns��
		Description:�õ���ʽ��� 
		return:
			1.��ʽ���string:�������� 
		about�� 
			1.cal/F/���ļ��㲽�� 
			2.getc/F/��÷������ȼ� 
			3.sd/stack/�ݴ����ּ��м�ֵ 
			4.sc/stack/�ݴ���� 
			5.error/F/���� 
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
