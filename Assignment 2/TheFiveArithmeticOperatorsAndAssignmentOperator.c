#include<stdio.h>

int main(void) {
	int a;
	int b;
	int result;

	//code
	printf("\n\n");
	printf("Enter A Number: ");
	scanf("%d", &a);

	printf("\n\n");
	printf("Enter Another Number: ");
	scanf("%d", &b);

	printf("\n\n");

	result = a + b;
	printf("Addition of A= %d And B=%d Gives %d.\n", a, b, result);

	result = a - b;
	printf("Substraction of A=%d and B=%d Gives %d.\n", a, b, result);

	result = a * b;
	printf("Multiplication of A=%d and B=%d Gives %d.\n", a, b, result);

	result = a / b;
	printf("Division of A=%d and B=%d Gives %d.\n", a, b, result);

	result = a % b;
	printf("Division of A=%d and B=%d Gives %d.\n", a, b, result);

	printf("\n\n");

	return(0);

}