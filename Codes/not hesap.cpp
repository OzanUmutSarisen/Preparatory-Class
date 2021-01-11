#include<stdio.h>

int main() {
	printf("please write a student's point ");
	int grade;
	scanf("%d", &grade);
	grade = grade / 10;
	switch (grade) {
	case 0:
	case 1:
	case 2:
	case 3:
		printf("FF");
		break;
	case 4:
		printf("DD");
		break;
	case  5:
		printf("DC");
		break;
	case  6:
		printf("CC");
		break;
	case  7:
		printf("BB");
		break;
	case  8:
		printf("BA");
		break;
	case  9:
	case 10:
		printf("AA");
		break;
	}
	
}
