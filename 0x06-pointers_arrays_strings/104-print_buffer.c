#include "main.h"
#include <stdio.h>

/**
 *print_buffer - Print a buffer 10 bytes per line.
 *@b: Buffer address.
 *@size: Number of characters to be printed.
 */
void print_buffer(char *b, int size)
{
	int i, j, l;

	for (i = 0; i < size; i += 10)
	{
		printf("%.8x:", i * 10);
		for (j = 0; j < 10; j++)
		{
			if ((j + i) % 2 == 0)
				printf(" ");
			if (j + i < size)
				printf("%.2x", *(b + i + j));
			else
				printf("  ");
		}
		printf(" ");
		for (l = i; l < i + 10; l++)
		{
			if (l >= size)
				break;
			if (*(b + l) < 32 || *(b + l) > 126)
				printf("%c", '.');
			else
				printf("%c", *(b + l));
		}
		printf("\n");
	}
}
