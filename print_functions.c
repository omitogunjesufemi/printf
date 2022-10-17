#include "main.h"

/**
 * print_char - prints charater from va_list
 * @character: va_list object
 * Return: size of bytes printed
 */
int print_char(va_list character)
{
	int byte_size;
	char pointer = (char) va_arg(character, int);

	byte_size = _putchar(pointer);
	return (byte_size);
}

/**
 * print_string - prints the string from va_list
 * @string: va_list object
 * Return: size of bytes printed
 */
int print_string(va_list string)
{
	int byte_size;
	char *pointer;

	pointer = va_arg(string, char *);
	byte_size = _puts(pointer);
	return (byte_size);
}

/**
 * print_percent - prints percent from va_list
 * @character: va_list object
 * Return: size of bytes printed
 */
int print_percent(va_list character)
{
	int byte_size;

	(void) character;
	byte_size = _putchar('%');
	return (byte_size);
}
