#include<Cstdio>

int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	int ac=a+b;
	
	if(ac<0){
		printf("-");
		ac=-ac;
	}
	
	if(ac>999999){
		int t=ac%1000;
		int h=(ac/1000)%1000;
		printf("%d,",ac/1000000);
		
		if(h<100&&h>9) printf("0%d,",h);
		else if(h<10) printf("00%d,",h); 
		else printf("%d,",h);
		
		if(t<100&&t>9) printf("0%d",t);
		else if(t<10) printf("00%d",t); 
		else printf("%d",t);	
	}else{
		if(ac<1000) printf("%d",ac);
		else{
			int t=ac%1000;
			if(t<100&&t>9) printf("%d,0%d",ac/1000,t);
			else if(t<10) printf("%d,00%d",ac/1000,t); 
			else printf("%d,%d",ac/1000,t);
		}
	}
	
	return 0;
}
