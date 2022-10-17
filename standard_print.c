#include "main.h"

/**
 * _putchar - Print a character
 * @c: character
 * Return: number of bytes printed
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _puts - Prints strings
 * @s: strings
 * Return: number of bytes printed
 */
int _puts(char *s)
{
	int i = 0;

	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}

	return (i);
}
