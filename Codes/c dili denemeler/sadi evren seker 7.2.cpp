#include<stdio.h>
#include<conio.h>
int fib(int);
int main() {
	int a[20];
	int i=0;
	while(i<20){
		a[i]=fib(i);
		printf("%d\ta[%d]\t: %d\n",i,i,fib(i));
		i++;
			
	}
	getch();		
}
int fib(int i){
	if (i==1||i==0)
		return 1;
	return fib(i-1)+fib(i-2);	
	}
