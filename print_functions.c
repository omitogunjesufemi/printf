#include "main.h"

/**
 * print_char - prints charater from va_list
 * @character: va_list object
 * Return: size of bytes printed
 */
unsigned int print_char(va_list character)
{
	unsigned int byte_size;
	char pointer = (char) va_arg(character, int);

	byte_size = _putchar(pointer);
	return (byte_size);
}

/**
 * print_string - prints the string from va_list
 * @string: va_list object
 * Return: size of bytes printed
 */
unsigned int print_string(va_list string)
{
	unsigned int byte_size;
	char *pointer;

	pointer = va_arg(string, char *);

	if (pointer == NULL)
	{
		byte_size = _puts("(null)");
		return (byte_size);
	}

	byte_size = _puts(pointer);
	return (byte_size);
}

/**
 * print_percent - prints percent from va_list
 * @character: va_list object
 * Return: size of bytes printed
 */
unsigned int print_percent(va_list character)
{
	unsigned int byte_size;

	(void) character;
	byte_size = _putchar('%');
	return (byte_size);
}

/**
 * print_integer - Prints an integer from va_list
 * @integer: va_list object
 * Return: size of bytes printed
 */
unsigned int print_integer(va_list integer)
{
	unsigned int byte_size;
	int num;

	num = va_arg(integer, int);
	byte_size = _put_int(num);
	return (byte_size);
}

/**
 * print_binary - Prints a binary from a va_list
 * @binary: A decimal number as va_list object
 * Return: size of bytes printed
 */
unsigned int print_binary(va_list binary)
{
	unsigned int byte_size, num;

	num = va_arg(binary, unsigned int);
	byte_size = decimal_to_nbase_print(num, 2);
	return (byte_size);
}

/**
 * print_uinteger - Prints an unsigned integer from va_list
 * @integer: va_list object
 * Return: size of bytes printed
 */
unsigned int print_uinteger(va_list integer)
{
	unsigned int byte_size;
	unsigned int num;

	num = va_arg(integer, int);

	byte_size = _put_uint(num);
	return (byte_size);
}

/**
 * print_octal - prints an octal from a va_list
 * @octal: A decimal number as va_list object
 * Return: size of bytes printed
 */
unsigned int print_octal(va_list octal)
{
	unsigned int byte_size, num;

	num = va_arg(octal, unsigned int);
	byte_size = decimal_to_nbase_print(num, 8);
	return (byte_size);
}
