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
	unsigned int len_digit, multiple, num, i, digit, count;

	if (n > 9 || n < 0)
	{
		count = 0;
		len_digit = int_len(n);

		if (n < 0)
		{
			_putchar('-');
			n = n * (-1);
			count++;
		}

		num = n;
		multiple = get_multiple(num);

		for (i = 0; i < len_digit; i++)
		{
			digit = (num / multiple) % 10;
			_putchar(digit + '0');
			multiple = multiple / 10;
		}

		return (count + len_digit);
	}
	else
	{
		_putchar(n + '0');
		return (1);
	}

	return (0);
}

/**
 * dec_to_binary_print - This converts a decimal number to binary, then prints
 * @num: decimal number
 * Return: byte size printed
 */
unsigned int dec_to_binary_print(unsigned int num)
{
	int remainder, remainder_count, i;
	char *ptr_remainder;
	char remainder_char;
	unsigned int print_size;

	i = 0;
	remainder_count = get_remainder_count(num);
	ptr_remainder = malloc((1 + remainder_count) * sizeof(char));

	while (num != 0)
	{
		remainder = num % 2;
		num = num / 2;
		remainder_char = (remainder + '0'); /*converting remainder to char*/
		ptr_remainder[i] = remainder_char;
		i++;
	}

	ptr_remainder[i] = '\0';
	reverse_string(ptr_remainder);
	print_size = _puts(ptr_remainder);
	free(ptr_remainder);

	return (print_size);
}
