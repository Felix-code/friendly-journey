#include <stdio.h>
/**
 * main - using putchar and getchar to get and print character
 *
 * Return: Always 0 Success
 */

int main(void)
{
	int ch;

	printf("Enter any character below: \n");
	ch = getchar();
	putchar(ch);
	putchar('\n');

	return (0);
}
