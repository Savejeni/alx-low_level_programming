#include <stdio.h>
/**
 * main - a program that prints all single digit numbers of base 10 starting fro * m 0
 *
 * Return: Successful Always
 * ?
 */
int main(void)

{
	int num
	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');
	putchar('\n');
	return (0);
}
