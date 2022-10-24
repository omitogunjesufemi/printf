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
 * reverse_string - Reverses a string
 * @s: The string to reverse
 */
void reverse_string(char *s)
{
	int len, i;
	int temp;

	len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	i = 0;
	while (i < (len / 2))
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
		i++;
	}
}

/**
 * _isalpha - Checks if a character is a letter
 * @c: The letter to be checked
 *
 * Return: 1 if true, 0 if false
*/
int _isalpha(char c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <=122))
		return (1);
	else
		return (0);
}
