#include <stdio.h>
/**
 * main - a program that displays the character enter by user
 *
 * return: Always 0 Success
 */

int main(void)
{
	int ch;

	printf("Please enter a character: ");
	ch = getc(stdin);
	printf("The character you entered is: %c\n", ch);

	return (0);
}
