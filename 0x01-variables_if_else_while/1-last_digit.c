#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: program gets a random number n and prints last digit
 *
 * Return 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int l;

	l = n % 5;

	if (l > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, l);
	if else(l == 0)
		printf("Last digit of %d is %d and is 0\n", n, 0);
	if else(l < 6 && l != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l);
	return (0);
}
