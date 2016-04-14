/*
	GetAns��
		Description:�õ���ʽ��� 
		input:�������� 
		output:��ʽ�����double 
		return:
			��ʽ���:�������� 
	cal�� 
		Description:����GetAns��������Ĳ��� 
		input:���ţ���sc 
		output:�м�ֵ������sd 
		return:
			����char:�������� 
	getc�� 
		Description:����cal����÷������ȼ�
		input:���ţ�char 
		output:���ȼ���int
		return:
			0:'(',')'
			1:'+','-'
			2:'*','/'
			3'_' 
	sd:stack/�ݴ����ּ��м�ֵ 
	sc:stack/�ݴ���� 
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
