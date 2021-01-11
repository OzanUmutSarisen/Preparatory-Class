#include<stdio.h>

int main() {
	int a=1,b;
	int flag =0;
	printf("Lutfen bir sayi yaziniz :");
	scanf("%d",&b);
	while (a<b-1){
		a++;
		if (b%a==0) {
			flag=1;
			break;
		}
	}
	if (flag==0)
		printf("sayi asal");
	if (flag==1)
		printf("sayi asal degil");
}
