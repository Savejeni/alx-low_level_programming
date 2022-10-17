#include <stdlib.h>

#include <time.h>

/* 0-positive_or_negative_c */
 
/* main: assign a random number to the variable n */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if n>0
		printf("%d is a postive number\n"n);
	else if n<0
		print("%d n is a nagetive number\n"n);
	else n=0
		print("%d n is zero\n"n)
	return (0);
}
