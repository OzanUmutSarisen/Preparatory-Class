#include<stdio.h>
/*fahrenheit � celsius a d�n��t�rme*/

int main() {
	int fahr;
	float celsius;
	int lower,upper,step;
	lower= 0;   /*s�cakl�k alt limit */
	upper= 20; /*s�cakl�k �st limit */
	step= 2; /*art�� oran�*/
	fahr=lower;
	printf("  fahrenheit\t  celcius");
	while(fahr<= upper) {
		celsius=(5.0/9.0)*(fahr-32);
		printf("\n%8d%18f\n",fahr,celsius);
		fahr =fahr+step;
	}
	
}
