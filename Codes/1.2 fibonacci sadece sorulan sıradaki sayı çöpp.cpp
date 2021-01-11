#include<stdio.h>
#include<locale.h>
int fib(int);
int main () {
	setlocale(LC_ALL,"Turkish");
	printf("lütfen kaç term istediðinizi belirtin : ");
	int x;
	scanf("%d",&x);
	printf(" %d",fib(x));
	
}	
int fib(int x){
	if (x==1||x==0)
		return 1;
	return fib(x-1)+fib(x-2);
	}

