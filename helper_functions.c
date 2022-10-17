#include "main.h"

/**
 * _putchar - Prints a single character
 * @c: The asci value of the character to print
 *
 * Return: Number of bytes written
 */
int _putchar(const char c)
{
	return (write(1, &c, 1));
}

/**
 * _strlen - Get the length of a string
 * @str: The string whose length is to be found
 *
 * Return: Length of the string excluding the string terminator
 */
unsigned int _strlen(const char *str)
{
	unsigned int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		i++;
	}
	return (i);
}
