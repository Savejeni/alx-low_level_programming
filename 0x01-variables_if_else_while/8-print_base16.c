#include <stdio.h>
/**
 * main- Print number in base 16
 *
 * Return: Successful alaways
 */
int main(void)
{
	int num;
	char letter;
	for (num = 0; num <= 10; num++)
		putchar("%x",num);
	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);
	putchar('\n');
	return (0);
}
