#include "main.h"

int print_last_digit(int i)
{
	int r = i % 10;
	if (r >= 0)
	{
		_putchar(r+ 48 );
		return (r);
	}
	else
	{
		_putchar(-r + 48)
		return (-r)
	}
	_putchar("\n");
}
