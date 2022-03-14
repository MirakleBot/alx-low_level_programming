#include <stdio.h>
/**
 * main - Entry point
 * Description: prints the alphabet in upper and lower case
 * Returns 0 (success)
 */
int main(void)
{
	char c = 'a';

		while (c <= 'z')
		{
			putchar(c);
			c++;
		}
	c = 'A';

		while (c <= 'Z')
		{
			putchar(c);
			c++;
		}
		putchar('\n');
		return (0);
}
