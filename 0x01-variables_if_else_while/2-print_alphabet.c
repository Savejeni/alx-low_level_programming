#include <stdio.h>
/**
 * main - A program that prints the alphabet in lowercase
 *
 * Return - Successful Always
*/
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	putchar('\n');
	return (0);
}
