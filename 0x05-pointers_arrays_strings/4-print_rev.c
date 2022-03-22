#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to be printed
 */

void print_rev(char *s)
{
	char chik;

	int i, see, see1;

	see = 0;
	see1 = 0;

	while (s[see] != '\0')
	{
		see++;
	}

	see1 = see - 1;
	for (i = 0; i < see / 2; i++)
	{
		chik = s[i];
		s[i] = s[see1];
		s[see1--] = chik;
	}
}
