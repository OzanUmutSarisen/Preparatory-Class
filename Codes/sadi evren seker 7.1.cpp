#include<stdio.h>

int main() {
	int a[] ={3,8,7,2,6};
		int i=0;
		while(i<5){
			printf("a[%d] = %d \n",i,a[i]);
			i++;
		}
		int gec;
		i=0;
		while(i<2){
		gec=a[i];
		a[i]=a[4-i];
		a[4-i]=gec;
		i++;
		}
		i=0;
		printf("\n\n");
		while (i<5){
			printf("a[%d] = %d \n",i,a[i]);
			i++;
		}
}
