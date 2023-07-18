#include "main.h"
/**
 * _isalpha - checks for alphabets.
 * @c: character being checked.
 *
 * Return: 1 for alphabetic characters 0 if otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	return (0);
}
