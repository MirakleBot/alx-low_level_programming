#include "main.h"
/**
 * print_alphabet_x10 - prints 10x the alphabet in lowercase
 *
 * followed by new line
 */
void print_alphabet_x10(void)
{
	char me;
	int i;

	i = 0;

	while (i < 10)
	{
		me ='a';
		while (me <= 'z')
		{
			_putchar(me);
			me++;
		}
		_putchar('\n');
		i++;
	}
}
