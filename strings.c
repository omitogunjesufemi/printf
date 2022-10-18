#include "main.h"

/**
 * str_len - Gets length of a string
 * @s: string
 * Return: length of string
 */
unsigned int str_len(char *s)
{
	unsigned int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
