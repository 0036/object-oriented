#include "Print.h"

int Print::PutStringQueue(queue<string> Wque){
	while(!Wque.empty()){
		cout<<Wque.front()<<"\n";
		Wque.pop();
	}
	return 0;
};
