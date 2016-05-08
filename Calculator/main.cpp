/*
	Name:Calculator
	Author:0036
	Description:C++������
	version:1.1
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
	if(input=="-f"){
		queue<string> inque;
		queue<string> outque;
		Scan Sc;
		Print Pr;
		Calculation Cal;
		cin>>input;
		inque=Sc.FileToString(input);
		while(!inque.empty()){
			Wque=Sc.ToStringQueue(inque.front());
			inque.pop();
			if( (Wque.front())[0]=='e' ) outque.push(Wque.front());
			else outque.push(Cal.GetAns(Wque));
		}
		
		cin>>input;
		Pr.AnsToFile(outque,input);
		
	}else if(input=="-a"){
		Scan Sc;
		Calculation Cal;
		cin>>input;
		Wque=Sc.ToStringQueue(input);
		if( (Wque.front())[0]=='e' ) cout<<Wque.front()<<endl;
		else cout<<input<<"= "<<Cal.GetAns(Wque)<<endl;
			
	}else{
		Scan Sc;
		Calculation Cal;
		Wque=Sc.ToStringQueue(input);
		if( (Wque.front())[0]=='e' ) cout<<Wque.front()<<endl;
		else cout<<Cal.GetAns(Wque)<<endl;
		
	}
	return 0;
}

