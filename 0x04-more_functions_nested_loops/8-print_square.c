#include "main.h"

/**
 * print_square - a function that prints a square, followed by a new line
 * @size: size of both width and length
 * Return: a square made of '#'
 */
void print_square(int size)
{
	int j, k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (j = 1; j <= size; j++)
		{
			_putchar('#');
			for (k = 2; k <= size; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
