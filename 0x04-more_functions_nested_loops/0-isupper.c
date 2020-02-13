#include <stdio.h>
#include "holberton.h"

/**
 * _isupper - checks for uppercase character
 * returns 1 if c is uppercase, 0 otherwise
 * @c: integer input by user
 * Return: (int)
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
