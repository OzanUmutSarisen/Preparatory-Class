#include<stdio.h>

int main () {
	int b;
	int a[b];
	printf ("You want to write how many student ??\t ");
	scanf("%d",&b);
	int i=1;
	while (i<=b){
		printf("please write %d.student's point\t ",i);
		scanf("%d",&a[i]);
		i++;
	}
	int c=1;
	while (c<=b){
		printf("\nstudent %d point \t%d",c,a[c]);
		c++;
	}
}
