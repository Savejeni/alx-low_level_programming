#include <stdio.h>
/**
 * main - A program that prints the alphabet in lowercase,
 * and then in uppercase
 *
 * Return: Successful Alway
 */
int main(void)

{

	char Letter;

		for (Letter = 'a' ; Letter <= 'z' ; Letter++)
			putchar(Letter);
		for (Letter = 'A' ; Letter <= 'Z' ; Letter++)
			putchar(Letter);
	putchar('\n');
	return (0);

}
