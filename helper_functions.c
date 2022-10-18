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
 * get_multiple - Gets the highest multiple of 10 which is a factor of @n
 * @num: A positive number
 *
 * Return: 1 if @n is <= 10; a multiple of 10 otherwise
 */
unsigned int get_multiple(unsigned int num)
{
	unsigned int multiple;

	multiple = 1;

	while (multiple * 10 < num)
	{
		multiple *= 10;
	}

	return (multiple);
}
