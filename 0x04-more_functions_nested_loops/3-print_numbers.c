#include <stdio.h>
#include "holberton.h"

void print_numbers(void)
{
	char i = '0';

	for (i = '0'; i <= 9; i++)
	{
		_putchar(i);
	}
	_putchar(10);
}
