/*
	Name:Calculator
	Author:0036
	Description:C++������
	version:3.2
	class List:
		Scan:�ļ����뼰Ԥ���� 
		Print:�ļ���������� 
		Calculation:����ֵ 
	History:
		author/time/vers/desc
		0036/160228/1.0/����,���Scan,Print 
		0036/160326/1.1/���մ���淶�����޸� 
		0036/160411/2.0/���Calculation 
		0036/160411/2.6/�޸�Scan��֧�ֲ��Ϸ����벢���� 
		0036/160508/3.0/֧��-f���޸�ע�� 
		0036/160510/3.1/�޸����� 
		0036/160522/3.2/�޸Ĵ���淶���޸�Print֧��������޸ı���,֧��������
*/

#include"Scan.h"
#include"Print.h"
#include "Calculation.h"

int main(int argc,char* argv[]){
	queue<string> wque;
	string input=argv[1]; 
	Scan Sc;
	Print Pr;
	Calculation Cal;
	
	if(input=="-f"){
		queue<string> inque;
		queue<string> outque;
		
		input=argv[argc-2];
		inque=Sc.FileToString(input);
		while(!inque.empty()){
			wque=Sc.ToStringQueue(inque.front());
			inque.pop();
			outque.push(Cal.GetAns(wque));
		}
		input=argv[argc-1];
		Pr.AnsToFile(outque,input);
		
	}else if(input=="-a"){
		input=argv[argc-1];
		wque=Sc.ToStringQueue(input);
		Pr.PutAns(Cal.GetAns(wque),input);	
	}else{
		
		wque=Sc.ToStringQueue(input);
		Pr.PutAns(Cal.GetAns(wque));
	}
	return 0;
}

