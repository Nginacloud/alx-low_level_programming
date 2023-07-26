#include "main.h"
/**
 * cap_string - capitalizes all words of a string.
 * @str: pointer
 *
 * Return: always success
 */
char *cap_string(char *str)
{
	int j = 1;
	int i;

	for (; str[i] != '\0'; i++)
	{
		if (j && islower(str[i]))
		{
			str[i] = toupper(str[i]);
		}
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
				str[i] == ',' || str[i] == ';' || str[i] == '.' ||
				str[i] == '!' || str[i] == '?' || str[i] == '"' ||
				str[i] == '(' || str[i] == ')' || str[i] == '{' ||
				str[i] == '}')
		{
			j = 1;
		}
		else
		{
			j = 0;
		}
	}
	return (str);
}
