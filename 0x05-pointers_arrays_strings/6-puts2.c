#include "main.h"

/**
 * puts2 - prints all character in a string
 * @str: string char to be printed
 */

void puts2(char *str)
{
	int k, i;

	k = 0;
	while (str[k] != '\0')
	{
		k++;
	}
	for (i = 0; i < k; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
