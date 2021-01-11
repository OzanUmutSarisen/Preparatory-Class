#include<stdio.h>
#include<locale.h>
//int f(int);
int main() {
	setlocale(LC_ALL,"Turkish");
	int a=1;
	while (a<=10){
		
		printf ("%d  ozi baba\n",a);
		a++;
	}
}
