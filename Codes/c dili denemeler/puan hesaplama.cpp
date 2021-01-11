#include<stdio.h>

int main (){
	int a;
	while (a!=EOF){
		printf("lutfen ogrencinin notunu girin\t");
		scanf("%d",&a);
		if (a>100)
		printf ("hoca hoca bi hata var ama sen bilin :D\n\n");
		else if (a>=90)
		printf("ogrencinin notu = AA\n\n");
		else if (a>=80)
		printf("ogrencinin notu = BA\n\n");
		else if (a>70)
		printf("ogrencinin notu = BB\n\n");
		else
		printf("ogrencinin notu = F\n\n");
	}	
}
