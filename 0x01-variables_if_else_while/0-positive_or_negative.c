#include <stdlib.h>

#include <time.h>

#include <stdio.h>

/**
 * main: Prints a random number and states whether
 * or its positive or negative
 * Return: Alway successful
 */ 

 int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is a postive\n", n);
	else if (n < 0)
		printf("%d n is a nagetive\n", n);
	else (n = 0)
		printf("%d n is zero\n", n);
	return (0);
}
