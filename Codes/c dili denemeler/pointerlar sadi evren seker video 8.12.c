#include<stdio.h>
//#include<conio.h>
int main () {
	int a=10;
	int *p;
	p=&a;
	printf("%d\n",*p);
	printf ("%d\n",p);
	printf("%d\n",a);
	printf("%d\n",&a);
	printf("%d\n",&p);
	//getch();
	//return 0;
}
