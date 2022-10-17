#include <stdio.h>
/**a program that prints outs value in floating and scientific values**/

int main(void)
{
	double dbl_num = 123.456;

	printf("The value of the variable in floating point is = %.3f\n", dbl_num);
	printf("The value of the variable in scientific notation is = %.3e\n", dbl_num);

	return (0);

}
