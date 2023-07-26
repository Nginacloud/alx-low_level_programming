#include "main.h"
/**
 * leet - encodes a string into 1337.
 * @str: string pointer
 *
 * Return: always 0
 */
char *leet(char *str)
{
	int i;
	int j;
	char leet_chars[] = "aAeEoOtTlL";
	char leet_codes[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; leet_chars[j] != '\0'; j++)
		{
			if (str[i] = leet_chars[j])
			{
				str[i] = leet_codes[j];
				break;
			}
		}
	}
	return (str);
}
