/*
	ToStringQueue��
		Description:��ù�������
		input:����string��������ʽ
		output:�������� 
		return:
			��������:��������
			�ն���:���ֳ���ʮλ	
	Error:
		Description:���� 
		input:�������ͣ�int 
		output:���� 
		return:
			����int:��������			
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
		queue<string> Wque; //�������� 
};

#endif
