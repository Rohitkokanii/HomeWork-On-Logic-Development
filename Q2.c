//Accept a number from the user and check if it is divisible by 5

#include<stdio.h>

int main() {
	int num;
	printf("Enter Num = ");
	scanf_s("%d",&num);

	if (num % 5 == 0) {
		printf("\nGiven No. %d is Completely Divided By 5\n",num);
	}
	else {
		printf("\nNot Divided By 5\n");
	}
	return 0;
}