#include<iostream>
using std::cin;

#include"Scan.h"
#include"Print.h"

int main(){
	Scan sc;
	Print pr;
	
	string input;
	cin>>input;
	pr.PutStringQueue(sc.ToStringQueue(input));
	return 0;
}

