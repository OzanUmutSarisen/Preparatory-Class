#include<stdio.h>

int main (){
	int a;
	while (a!=EOF) {
	printf("lutfen mesai saatinizi yaziniz\t");
	scanf("%d",&a);
	if (a<=10)
		printf("maasiniz = %d\n\n",a*5);
	else if (a<=20)
		printf("maasiniz = %d\n\n",50+(a-10)*3);
	else
		printf("maasiniz = %d\n\n",80+(a-20)*2);
	}
}
