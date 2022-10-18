#include <stdio.h>
/**
 * main- Print number in base 16
 *
 * Return: Successful alaways
 */
int main(void)
{
	int num;
	char num;
	for (num = 0; num<=10; num++)
	for (num = 'a'; num = 'f'; num++)
		putchar(num);
	putchar('\n');
	return (0);
}
