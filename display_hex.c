#include <stdio.h>
/**
 * main - print integers in hex format
 *
 * Return: Always 0 Success
 */

int main(void)
{
	int num1 = 15, num2 = 150, num3 = 1500;

	printf("First number = 0x%04X\n", num1);
	printf("Second number = 0x%04X\n", num2);
	printf("Third number = 0x%04X\n", num3);

	return (0);

}
