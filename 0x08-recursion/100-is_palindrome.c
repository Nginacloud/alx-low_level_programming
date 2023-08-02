#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: input string
 *
 * Return: length
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (_strlen(s + 1) + 1);
}
/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: string pointer
 *
 * Return: 1 if palindrome, else 0
 */
int is_palindrome(char *s)
{
	int i = _strlen(s);

	if (i <= 1)
	{
		return (1);
	}
	if (*s == *(s + i - 1))
	{
		return (is_palindrome(s + 1));
	}
	return (0);
}
