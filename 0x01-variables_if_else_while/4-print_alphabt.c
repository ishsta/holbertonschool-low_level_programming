#include <stdio.h>

/**
 * main - Entry
 * Return: Always 0 Success
 */

int main(void)
{
	int i;
	char c, n;

	c = 'a';
	n = '/n';

	for (i = 0; i < 26; i++)
	{
		if (i == 4 || i == 16)
		{
			c++;
		}
		else
		{
			putchar(c);
			c++;
		}
	}

	putchar(n);

	return (0);
}
