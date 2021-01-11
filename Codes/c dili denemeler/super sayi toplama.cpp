#include<stdio.h>

int main () {
	int i,b,a=1,tp=0;
	printf("lutfen kac sayi girmek istediginizi belirtin :");
	scanf("%d",&i);
	while(i>=1){
		printf("%d. sayiyi giriniz :\t",a);
		scanf("%d",&b);
		tp=tp+b;
		a++;
		i--;
		if (b==0)
			break;
	}
	printf("sonuc : %d",tp);
}
