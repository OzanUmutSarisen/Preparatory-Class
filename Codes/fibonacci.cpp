#include<stdio.h>
#include<locale.h>
int fib(int);
int main () {
	setlocale(LC_ALL,"Turkish");
	int v=0;
	while (v!=EOF){
	
	printf("lütfen kaç term istediðinizi belirtin : ");
	int n;
	scanf("%d",&n);
	int foo=n;
	int b=0;
	int a=0;
	if (foo>=2){
		printf ("1 1");
	while (n>=2){
		printf(" %d",fib(a));
		n--;
		a++;
		}
		printf("\n");
	}
	else if(n==1)
		printf("1 1 \n");
	else if(n==0)
		printf("1 \n");
	
	}	
}
int fib(int a){
	int n,foo,b;
	// 1 1 2 3 5 8
	int sonuc=0,y=1,x=1;
	while (a>=0){
		sonuc=x+y;
		x=y;
		y=sonuc;
		a--;
	}
	return sonuc;
}
