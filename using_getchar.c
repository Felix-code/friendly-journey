#include <stdio.h>
/**
 * main - Reading input by calling getchar
 *
 * Return: Always 0 Success
 */

int main(void)
{
	int ch1, ch2;

	printf("Enter two characters without spaces: ");
	ch1 = getc(stdin);
	ch2 = getchar();

	printf("The first character you entered is: %c\n", ch1);
	printf("The second character you entered is: %c\n", ch2);

	return (0);
}
