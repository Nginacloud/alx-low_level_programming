#include "main.h"
/**
 * _isdigit - checks for a digit 0 through 9.
 * @c: character
 *
 * Return: 1 if c is a digit, 0 if otherwise
 */
int _isdigit(int c)
{
	if (c >= 49 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
