#include<stdio.h>
int main () {
	int a[20];
	a[0]=1;
	a[1]=1;
	int i=2;
	while(i<20){
		a[i]=a[i-1]+a[i-2];
		printf("a[%d]\t: %d\n",i,a[i]);
		i++;
		}
}
