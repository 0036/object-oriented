/*
	Name:Calculator
	Author:0036
	Description:C++计算器
	version:3.2
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
		0036/160510/3.1/修改输入 
		0036/160522/3.2/修改代码规范，修改Print支持输出，修改报错,支持命令行
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

