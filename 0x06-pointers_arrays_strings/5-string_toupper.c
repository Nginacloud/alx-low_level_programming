#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @str: pointer
 *
 * Return: always 0
 */
char *string_toupper(char *)
{
	int i = 0;

	for (; str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - ('a' - 'A');
		}
		i++;
	}
	return (str);
}
