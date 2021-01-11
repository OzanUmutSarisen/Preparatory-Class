#include<stdio.h>

int main () {
    int celsius;
	float fahrenait;
	int upper,lower,step;
	lower = 0;
	upper = 300;
	step = 2;
	celsius=lower;
	while(celsius<=upper) {
		fahrenait = (9.0*celsius/5.0)+32;
		printf("\n%8d%13f",celsius,fahrenait);
		celsius=celsius+step;
	}
}
