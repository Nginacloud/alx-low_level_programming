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
	return (1 + _strlen(s + 1));
}
/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: string pointer
 * @i: integer index
 *
 * Return: 1 if palindrome, else 0
 */
int is_palindrome(char *s, int i)
{
	int len = _strlen(s);

	if (i <= len / 2)
	{
		return (1);
	}
	if (s[i] == s[len - 1 - i])
	{
		return (is_palindrome(s, i + 1));
	}
	return (0);
}
