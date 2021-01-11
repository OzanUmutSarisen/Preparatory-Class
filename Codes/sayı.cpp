#include<stdio.h>
#include<locale.h>

int main () {
	setlocale(LC_ALL,"Turkish");
	int a=100;
	int i=0;
	while (a>50){
		a--;
		if(a%3==0){
			i++;
			printf("%d\t : %d\n",i,a);
			}
	}
}
