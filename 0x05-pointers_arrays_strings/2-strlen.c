#include "main.h"

/**
 * _strlen - returns length of string
 * @s: integer to return
 * Return: length of string
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
