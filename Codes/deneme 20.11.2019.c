#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int manin() {
	srand(time(0));
	int k = rand();
	printf("the number is : %d", k);
	return 0;
}
