/*
	Name:Calculator
	Author:0036
	Description:C++计算器
	version:1.1
	class List:
		Scan:处理输入的字符串
		Print:输出所得到的队列
		Calculation:计算值 
	Uclass List:
		Wque:queue/工作队列/符号和数字分离的算式 
	History:
		author/time/vers/desc
		0036/160228/1.0/创立,添加Scan,Print 
		0036/160326/1.1/参照代码规范部分修改 
		0036/160411/2.0/添加Calculation 
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

