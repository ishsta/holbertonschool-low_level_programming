#include <stdio.h>
#include "holberton.h"

/**
 * _isdigit - checks for digit
 * returns 1 if c is digit, 0 otherwise
 * @c: user input
 * Return: (int)
 */

int _isdigit(int c);
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
