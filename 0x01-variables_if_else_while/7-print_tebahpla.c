#include <stdio.h>
/**
 * main - print letters in the reverse order
 *
 * Return: Successful always
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter = 'a'; letter--)
		putchar(letter);
	putchar('\n');
	return (0);
}
