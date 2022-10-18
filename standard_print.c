#include "main.h"

/**
 * _putchar - Print a character
 * @c: character
 * Return: number of bytes printed
 */
unsigned int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _puts - Prints strings
 * @s: strings
 * Return: number of bytes printed
 */
unsigned int _puts(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}

	return (i);
}

/**
 * _put_int - Prints integer
 * @n: integer
 * Return: number of integers printed
 */
unsigned int _put_int(int n)
{
	unsigned int len_digit, multiple, num, i, digit;

	if (n > 9 || n < 0)
	{
		num = n;
		len_digit = int_len(n);
		multiple = get_multiple(num);
		if (num < 0)
		{
			_putchar('-');
			num = num * -1;
		}

		for (i = 0; i < len_digit; i++)
		{
			digit = (num / multiple) % 10;
			_putchar(digit + '0');
			multiple = multiple / 10;
		}

		return (len_digit);
	}
	else
	{
		_putchar(n + '0');
		return (1);
	}

	return (0);
}
