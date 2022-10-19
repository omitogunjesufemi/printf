#include "main.h"

/**
 * check_for_some_chars - For some characters after % that should fail
 * @c: character to check
 * Return: 1 if it exist, 0 if not
 */
int check_for_some_chars(char c)
{
	int i;
	int some_chars[] = {32, 35, 42, 43, 45};

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
