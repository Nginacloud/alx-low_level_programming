#include "main.h"
#include <stdio.h>
/**
 * _atoi - convert a string to an integer
 * @s: string pointer
 *
 * Return: alwways 0
 */
int _atoi(char *s)
{
	long int result = 0;
	long int result =j;
	int sign = 1;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			for (i = 0; s[i] >= '0' && s[i] <='9'; i++)
			{
				j = j * 10 + s[i] -'0';
				if (j * sign > INT_MAX)
				{
					return INT_MAX;
				}
				else if (j * sign < INT_MIN)
				{
					return INT_MIN;
				}
			}
			break;
		}
	}
	return (int)(result * sign);
}
