#include <stdio.h>

/**
 * main Print all the letters except q and e
 * in lowercase
 * Return: Successful Alaways
 */
int main(void)

{
	
	char Alphabet;
	for (Alphabet = 'a'; Alphabet <= 'z'; Alphabet++)
	if (Alphabet != 'e' && Alphabet != 'q')
		putchat(Alphabet);
	putchar('\n');
	return (0);

}


		
