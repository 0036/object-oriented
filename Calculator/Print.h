/*
	AnsToFile��
		Description:�ļ���� 
		return:
			1.1:��������  
		about�� 
			1.prc/F/ת������ 
	PutStringQueue��
		Description:������� 
		return:
			1.1:�������� 
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
#include<fstream>
using std::fstream;

class Print
{
	public:
		int PutStringQueue(queue<string> Wque);
		int AnsToFile(queue<string> Fque,string foutput);
	protected:
		int prc(char* s,int n);
};

#endif
