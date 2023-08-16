#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints its own opcodes
 * @argc: number of arguments
 * @argv: argument vector
 *
 * Return: success
 */
int main(int argc, char *argv[])
{
	int bytes, i;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit;
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	arr = (char *)main;
	for (i = 0; i < bytes; i++)
	{
		if (i == bytes - 1)
		{
			printf("%02x\n", arr[i]);
			break;
		}
		printf("%02x", arr[i]);
	}
	return (0);
}
