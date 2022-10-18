#include <stdio.h>
/**
 * main - print letters in the reverse order
 *
 * Return: Successful always
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter--)
		putchar(letter);
	putchar('\n');
	return (0);
}
