#include "main.h"
/**
 *main -  function that prints the alphabet, in lowercase
 *
 *Return: Succeful always
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
