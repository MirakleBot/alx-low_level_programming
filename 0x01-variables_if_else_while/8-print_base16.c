#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description: print all numbers of base 16 in lowercase
 * followed by a new line
 * Return: 0
 */
int main(void)
{
	int c = '0';

	while (c <= '9')
	{
		putchar(c);
		c++;
	}
	c = 'a';
	if (c == '10' && c < '17')
	{
	putchar(c);
	c++;
	}
	putchar('\n');
	return (0);
}
