#include<stdio.h>

int main() {
	int a,b;
	while (a,b!=EOF) {
		scanf("%d%d",&a,&b);
		if(a>b)
			printf("a buyuk = %d\n\n",a);
		if(a<b)
			printf("b buyuk = %d\n\n",b);
		if(a==b)
			printf("iki sayida esit\n\n");
	}
}
