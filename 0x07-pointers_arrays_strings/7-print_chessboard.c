#include "main.h"
/**
 * print_chessboard - prints the chessboard
 * @a: pointer
 *
 * Return: always 0
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		if (i % 8 == 0 && i != 0)
		{
			for (j = 0; j < i + 8; j++)
			{
				_putchar(a[j / 8][j % 8]);
			}
			_putchar('\n');
		}
		_putchar(a[i / 8][i % 8]);
	}
	_putchar('\n');
}
