#include <stddef.h>
#include "main.h"
/**
 * binary_to_uint - converts binary to int
 * @b: pointer
 *
 * Return: the converted number, else 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;/*store unsigned int in binary*/
	unsigned int bit;/*hold integer value being processed*/
	size_t i;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')/*character*/
		{
			return (0);
		}
		bit = b[i] - '0';
		result = (result * 2) + bit;
	}
	return (result);
}
