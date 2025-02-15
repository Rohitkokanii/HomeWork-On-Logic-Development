//Accept a number from the user. Reverse the number and print it.

#include<stdio.h>

int main() {
	int num;
	printf("Enter No. = ");
	scanf_s("%d", &num);
	
	int n1 = num % 10;
	num /= 10;

	int n2 = num % 10;
	num /= 10;

	int n3 = num % 10;
	num /= 10;

	int rev = n1 * 100 + n2 * 10 + n3 * 1;

	printf("\nReverse No. %d\n",rev);

	return 0;
}