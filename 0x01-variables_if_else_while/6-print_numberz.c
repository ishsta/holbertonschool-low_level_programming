#include <stdio.h>

/**
 * main - Entry
 * Return: Always 0 Success
 */

int main(void)
{
	int i, c;

	c = 48;

	for (i = 0; i < 10; i++)
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
