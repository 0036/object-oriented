/*
	PutAns:
		Description:���ļ����
	AnsToFile��
		Description:�ļ���� 
		About:	
			1.prc/F/ת������	
	PutStringQueue��
		Description:������� 
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
using std::ofstream;

class Print
{
	public:
		void PutAns(string ans,string input);
		void PutAns(string ans);	
		void PutStringQueue(queue<string> wque);
		void AnsToFile(queue<string> fque,string foutput);
	protected:
		void prc(char* s,int n);
};

#endif
