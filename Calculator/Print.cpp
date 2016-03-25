#include "Print.h"

#include<iostream>
using std::cout;

void Print::PutStringQueue(queue<string> Wque){
	while(!Wque.empty()){
		cout<<Wque.front()<<"\n";
		Wque.pop();
	}
};
