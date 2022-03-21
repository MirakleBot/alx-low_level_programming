#include "main.h"
#include <stdio.h>

/**
 * swap_int - function swap two integers
 * @a: swap for b
 * @b: swap for a
 */
void swap_int(int *a, int *b)
{
	*a = *b;
	
	a = b;
}
