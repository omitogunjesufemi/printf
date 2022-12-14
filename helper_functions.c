#include "main.h"

/**
 * check_for_some_chars - For some characters after % that should fail
 * @c: character to check
 * Return: 1 if it exist, 0 if not
 */
int check_for_some_chars(char c)
{
	int i;
	int some_chars[] = {35, 42, 43, 45};

	for (i = 0; i < 5; i++)
	{
		if (c - some_chars[i] == 0)
			return (1);
	}

	return (0);
}

/**
 * int_len - This returns the length of an integer
 * @digit: integer to be checked
 * Return: number of digit present in integer
 */
unsigned int int_len(int digit)
{
	unsigned int result = 0;

	if (digit < 0)
	{
		digit *= -1;
	}

	while (digit != 0)
	{
		digit = digit / 10;
		result++;
	}
	return (result);
}

/**
 * uint_len - This returns the length of an unsigned integer
 * @digit: integer to be checked
 * Return: number of digit present in integer
 */
unsigned int uint_len(unsigned int digit)
{
	unsigned int result = 0;

	while (digit != 0)
	{
		digit = digit / 10;
		result++;
	}
	return (result);
}

/**
 * get_multiple - Gets the highest multiple of 10 which is a factor of @n
 * @num: A positive number
 * Return: 1 if @n is <= 10; a multiple of 10 otherwise
 */
unsigned int get_multiple(unsigned int num)
{
	long int multiple;

	multiple = 1;

	while (multiple * 10 <= num)
	{
		multiple *= 10;
	}
	return ((unsigned int) multiple);
}

/**
 * get_remainder_count - Gets the count of remainder
 * for decimal to binary conversion
 * @num: the decimal number
 * Return: remainder count
 */
int get_remainder_count(unsigned int num)
{
	int count;

	count = 0;
	while (num != 0)
	{
		num = num / 2;
		count++;
	}

	return (count);
}

/**
 * get_long_int_remainder_count - Gets the count of remainder
 * for long int decimal to hexadecimal conversion
 * @num: the decimal number
 * Return: remainder count
 */

int get_long_int_remainder_count(unsigned long int num)
{
	int count;

	count = 0;
	while (num != 0)
	{
		num = num / 2;
		count++;
	}

	return (count);
}


/**
 * get_remainder - divides numbers and returns the remainder as char
 * @num: The number to be divided
 * @nbase: The base to used in the division
 * @hex_flag: 0 Default, 1 for UPPERCASE hex values
 *
 * Return: The char value of the remainder
 */
char get_remainder(unsigned int num, int nbase, int hex_flag)
{
	int remainder;
	char remainder_char;

	remainder = num % nbase;

	if (remainder < 10)
		remainder_char = remainder + 48; /*Use ascii value*/
	else
	{
		if (hex_flag == 0)
			remainder_char = remainder + 87;
		else if (hex_flag == 1)
			remainder_char = remainder + 55;
	}

	return (remainder_char);
}

/**
 * long_hex_remainder - Remainder for during long int to hexadecimal conversion
 * @num: the long int
 * Return: char value of remainder
 */
char long_hex_remainder(unsigned long int num)
{
	int remainder;
	char remainder_char;

	remainder = num % 16;

	if (remainder < 10)
		remainder_char = remainder + 48;
	else
	{
		remainder_char = remainder + 87;
	}

	return (remainder_char);
}


/**
 * print_string_special_chars - Prints a string that contains unprintable
 * special chars
 * @str: The string to print
 * Return: The number of bytes printed
 */
unsigned int print_string_special_chars(char *str)
{
	unsigned int i, count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 32) || (str[i] >= 127))
		{
			count += _putchar(92);
			count += _putchar(120);

			if (str[i] < 16)
				count += _putchar(48);
			count += decimal_to_nbase_print(str[i], 16, 1);
		}
		else
		{
			count += _putchar(str[i]);
		}
		i++;
	}
	return (count);
}
