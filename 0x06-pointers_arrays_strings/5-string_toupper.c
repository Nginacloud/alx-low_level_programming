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
		if (str[i] >= '97' && str[i] <= '122')
		{
			str[i] = str[i] - ('97' - '65');
		}
		i++;
	}
	return (str);
}
