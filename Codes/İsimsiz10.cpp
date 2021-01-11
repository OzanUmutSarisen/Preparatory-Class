#include<stdio.h>

int main () {
	float a;
	scanf("%f",&a);
	while (a>=5) {
		printf("try again\n"); 
		scanf("%f",&a);
}
      
	if (a<5)
		printf("True");
}
