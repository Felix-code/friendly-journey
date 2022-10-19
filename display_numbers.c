#include <stdio.h>
/**A program that displays and align numbers to the left edge of the field**/

int main(void)
{
	int num1;
	float num2;

	num1 = 123;
	num2 = 123.456;

	printf("%d\n", num1);
	printf("%-10.3f\n", num2);

	return (0);

}
