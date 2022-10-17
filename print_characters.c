#include <stdio.h>
/**
 * main - a program that puts the characters B,y,e on the screen
 *
 * Return: Always 0 Success
 */

int main(void)
{
	int ch1, ch2, ch3;

	ch1 = 'B';
	ch2 = 'y';
	ch3 = 'e';

	/**method I**/
	printf("%c%c%c\n", ch1, ch2, ch3);

	/**method II**/
	putchar(ch1);
	putchar(ch2);
	putchar(ch3);
	putchar(10);

	return (0);


}
