/*
	Name:Calculator
	Author:0036
	Description:C++������
	version:1.1
	calss List:
		Scan:����������ַ���
		Print:������õ��Ķ���
	History:
		author/time/vers/desc
		0036/160228/1.0/����,���Scan,Print 
		0036/160326/1.1/���մ���淶�����޸� 

*/

#include<iostream>
using std::cin;

#include"Scan.h"
#include"Print.h"

int main(){
	Scan Sc;
	Print Pr;
	string input; 
	cin>>input;
	Pr.PutStringQueue(Sc.ToStringQueue(input));
	return 0;
}

