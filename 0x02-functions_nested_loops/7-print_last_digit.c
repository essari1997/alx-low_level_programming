#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @i: The number in question.
 *
 * Return: Value of the last digit.
 */
int print_last_digit(int i)
{
	int r = i % 10;

	if (r >= 0)
	{
		_putchar(r + '0');
		return (r);
	}
	else
	{
		_putchar(-r + '0')
		return (-r)
	}
	_putchar('\n');
}
