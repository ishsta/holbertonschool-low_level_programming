#include <stdio.h>
#include <holberton.h>

/**
 * main - Entry
 *
 * Return: Always 0
 */

int main(void)
{
	char c[] = "Holberton";
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
	return (0);
}
