#include<stdio.h>

int main() {
	
	int i=100;
	while (i>=20){
	
		if (i%3==0&&i%7==0)
			printf("\n\t%d",i);
		i--;
	}
}
