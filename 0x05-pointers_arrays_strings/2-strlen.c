#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 * @s: char input
 * Return: length of the input string
 */
int _strlen(char *s)
{
	int i = 1, sum = 0;
	char p = s[0];

	while (p != '\0')
	{
		sum++;
		p = s[i++];
	}
	return (sum);
}
