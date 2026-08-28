#include<stdio.h>

int main(void) {
	//variable declaration
	int a;
	int b;
	int x;

	//code
	printf("\n\n");
	printf("Enter A number:");
	scanf("%d", &a);

	printf("\n\n");

	printf("Enter Another Number:");
	scanf("%d", &b);

	printf("\n\n");

	x = a;
	a += b; // a = a+b
	printf("Addition Of A = %d And B = %d Gives %d.\n", x, b, a);
	x = a; // a = a-b
	printf("Subtraction Of A = %d And B = %d Gives %d.\n", x, b, a);

	x = a;
	a *= b; //a=a*b
	printf("Multiplication of A = %d and B=%d Gies %d.\n", x, b, a);

	x = a;
	a /= b; //a=a/b

	printf("Division Of A = %d And B = %d Gives Quotient %d.\n", x, b, a);

	x = a;
	a %= b; //a=a%b

	printf("division of A = %d and b = %d Gives reminder %d.\n", x, b, a);

	printf("\n\n");
	return(0);

}