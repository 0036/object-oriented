#include "Print.h"

#include<iostream>
using std::cout;

void Print::PutStringQueue(queue<string> q){
	while(!q.empty()){
		cout<<q.front()<<"\n";
		q.pop();
	}
};
