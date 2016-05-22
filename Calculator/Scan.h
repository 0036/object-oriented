/*
	FileToString��
		Description:�ļ�����
		return��
			1.fque��Ŀ����� 
		about��
			1.prc/F/ת������	 
	ToStringQueue��
		Description:��ù�������
		return:
			1.wque:�������� 
			2.����error�ַ��������� 
		about��
			1.error/F/���� 
				
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
