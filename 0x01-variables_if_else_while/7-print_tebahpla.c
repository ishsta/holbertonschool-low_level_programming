#include <stdio.h>

/**
 * main - Entry
 * Return: Always 0 Success
 */

int main(void)
{
	int i, c;

	c = 122;

	for (i = 0; i < 26; i++)
	{
		putchar(c);
		c--;
	}

	putchar('\n');

	return (0);
}
