/*
	Name:Calculator
	Author:0036
	Description:C++计算器
	version:1.1
	calss List:
		Scan:处理输入的字符串
		Print:输出所得到的队列
	History:
		author/time/vers/desc
		0036/160228/1.0/创立,添加Scan,Print 
		0036/160326/1.1/参照代码规范部分修改 

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

