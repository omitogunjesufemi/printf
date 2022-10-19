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

/**
 * reverse_str - Reverses a string
 * @str: The string to reverse
 * Return: Nothing
 */
void reverse_string(char *s)
{
	int len, i;
	char temp;

	len = 0;
	i = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	while (i < len)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
		i++;
	}
}
