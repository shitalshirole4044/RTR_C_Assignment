#include<stdion.h>

int main(void) {
	int a;
	int b;
	int result;

	printf("\n\n");
	printf("Enter One integer:");
	scanf("%d", &a);

	printf("\n\n");
	printf("Enter Another Integer : ");
	scanf("%d", &b);

	printf("\n\n");
	printf("If Answer=0, It is 'FALSE'.\n");
	printf("If Answer=1, It is 'TRUE'.\n\n");

	result = (a < b);
	printf("(a < b) A = %d Is Less Than B = %d\t Answer = %d\n",a, b, result);

	result = (a > b);
	printf("(a > b) A = %d Is Greater Than B = %d \t Answer = %d\n", a, b, result);

	result = (a >= b);
	printf("(a >= b) A = %d Is Greater Than Or Equal To B = %d \t Answer = %d\n",a, b, result);

	result = (a == b);
	printf("(a == b) A = %d Is Equal To B = %d \t Answer = % d\n", a, b, result);

	result = (a != b);
	printf("(a != b) A = %d Is NOT Equal To B = %d \t Answer = %d\n", a, b, result);

	return(0);
}