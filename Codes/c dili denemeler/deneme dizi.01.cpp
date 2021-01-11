#include<stdio.h>

int main () {

	int a=10;
	while (a>5){		
		int b;
		printf("please write number\t ");
		scanf("%d",&b);
		int a[b];
		int i=0;
		while (i<=b){
	
			a[i]=i;
			printf("%d\t",a[i]);
			i++;
		}	
	}
}
