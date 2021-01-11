#include<stdio.h>

int main () {
	int b;
	//int c=1;
	printf ("How many student you wants to write");
	scanf ("\t%d",&b);
	int a[b];
	int i=1;
	while(i<=b){
	/*	printf ("what is your student's name ?");
		a[c]=getchar();*/
		printf ("what is your student's point?");
		scanf ("\t%d",&a[i]);
		i++;
	}
	
}
