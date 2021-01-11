#include<stdio.h>
/*fahrenheit ý celsius a dönüþtürme*/

int main() {
	int fahr;
	float celsius;
	int lower,upper,step;
	lower= 0;   /*sýcaklýk alt limit */
	upper= 20; /*sýcaklýk üst limit */
	step= 2; /*artýþ oraný*/
	fahr=lower;
	printf("  fahrenheit\t  celcius");
	while(fahr<= upper) {
		celsius=(5.0/9.0)*(fahr-32);
		printf("\n%8d%18f\n",fahr,celsius);
		fahr =fahr+step;
	}
	
}
