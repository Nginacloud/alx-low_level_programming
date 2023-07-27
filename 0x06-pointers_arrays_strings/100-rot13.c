#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @str: pointer
 *
 * Return: pointer srt
 */
char *rot13(char *str)
{
	int i;
	int j;
	char data[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == data[j])
			{
				str[i] = datarot[j];
				break;
			}
		}
	}
	return (str);
}
