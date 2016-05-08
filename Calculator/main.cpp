/*
	Name:Calculator
	Author:0036
	Description:C++计算器
	version:1.1
	class List:
		Scan:文件输入及预处理 
		Print:文件等输出操作 
		Calculation:计算值 
	History:
		author/time/vers/desc
		0036/160228/1.0/创立,添加Scan,Print 
		0036/160326/1.1/参照代码规范部分修改 
		0036/160411/2.0/添加Calculation 
		0036/160411/2.6/修改Scan，支持不合法输入并报错 
		0036/160508/3.0/支持-f，修改注释 
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

