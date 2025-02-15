//Accept two numbers from the user. Find which is greater and print it.

#include<stdio.h>

int main() {
	int n1, n2;
	printf("Enter No. = ");
	scanf_s("%d%d",&n1,&n2);

	if (n1 > n2) {
		printf("Greater = %d",n1);
	}
	else {
		printf("Greater = %d", n2);
	}
	return 0;
}