//Accept a year from the user. Check if the year is a leap year or not.

#include<stdio.h>

int main() {
	int year;
	printf("Enter Year = ");
	scanf_s("%d", &year);

	if (year % 100 == 0) {
		if (year % 400 == 0) {
			printf("leap year");
		}
		else {
			printf("Not leap year");
		}
	}
	else if (year % 4 == 0) {
		printf("leap year");
	}
	else {
		printf("Not leap year");
	}
	
	return 0;
}