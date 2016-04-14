/*
	Name:Calculator
	Author:0036
	Description:C++������
	version:1.1
	class List:
		Scan:����������ַ���
		Print:������õ��Ķ���
		Calculation:����ֵ 
	Uclass List:
		Wque:queue/��������/���ź����ַ������ʽ 
	History:
		author/time/vers/desc
		0036/160228/1.0/����,���Scan,Print 
		0036/160326/1.1/���մ���淶�����޸� 
		0036/160411/2.0/���Calculation 
*/

#include<iostream>
using std::cin;
using std::cout;
using std::endl;

#include"Scan.h"
#include"Print.h"
#include "Calculation.h"

int main(int argc,char* argv[]){
	queue<string> Wque;
	string input; 
	cin>>input;
	if(input=="-a"){
		Scan Sc;
		Calculation Cal;
		cin>>input;
		Wque=Sc.ToStringQueue(input);
		cout<<input<<"= "<<Cal.GetAns(Wque)<<endl;	
	}else{
		Scan Sc;
		Calculation Cal;
		Wque=Sc.ToStringQueue(input);
		cout<<Cal.GetAns(Wque)<<endl;
	}
	return 0;
}

