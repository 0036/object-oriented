/*
	FileToString��
		Description:�ļ�����
		return��
			1.Fque��Ŀ����� 
		about��
			1.prc/F/ת������	 
	ToStringQueue��
		Description:��ù�������
		return:
			1.Wque:�������� 
			2.����error�ַ��������� 
		about��
			1.Error/F/���� 
				
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
