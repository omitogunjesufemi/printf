#include "main.h"

/**
 * print_char - prints charater from va_list
 * @character: va_list object
 * Return: size of bytes printed
 */
unsigned int print_char(va_list character, char *flags)
{
	unsigned int byte_size;
	char pointer = (char) va_arg(character, int);
	(void) flags;

	byte_size = _putchar(pointer);
	return (byte_size);
}

/**
 * print_string - prints the string from va_list
 * @string: va_list object
 * Return: size of bytes printed
 */
unsigned int print_string(va_list string, char *flags)
{
	unsigned int byte_size;
	char *pointer;

	(void) flags;
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
unsigned int print_percent(va_list character, char *flags)
{
	unsigned int byte_size;

	(void) character;
	(void) flags;
	byte_size = _putchar('%');
	return (byte_size);
}

/**
 * print_integer - Prints an integer from va_list
 * @integer: va_list object
 * Return: size of bytes printed
 */
unsigned int print_integer(va_list integer, char *flags)
{
	unsigned int byte_size;
	int num, i;

	num = va_arg(integer, int);
	byte_size = 0;

	if (flags)
	{
		for (i = 0; flags[i] != '\0'; i++)
		{
			if (flags[i] == '+')
			{
				if (num >= 0)
					byte_size += _putchar('+');
			}

			else if (flags[i] == ' ')
			{
				if (byte_size == 0 && num >= 0)
					byte_size += _putchar(' ');
			}
		}
	}

	byte_size += _put_int(num);
	return (byte_size);
}

/**
 * print_binary - Prints a binary from a va_list
 * @binary: A decimal number as va_list object
 * Return: size of bytes printed
 */
unsigned int print_binary(va_list binary, char *flags)
{
	unsigned int byte_size, num;

	(void) flags;
	num = va_arg(binary, unsigned int);
	byte_size = decimal_to_nbase_print(num, 2, 0);
	return (byte_size);
}

/**
 * print_uinteger - Prints an unsigned integer from va_list
 * @integer: va_list object
 * Return: size of bytes printed
 */
unsigned int print_uinteger(va_list integer, char *flags)
{
	unsigned int byte_size;
	unsigned int num;

	(void) flags;
	num = va_arg(integer, int);

	byte_size = _put_uint(num);
	return (byte_size);
}

/**
 * print_octal - prints an octal from a va_list
 * @octal: A decimal number as va_list object
 * Return: size of bytes printed
 */
unsigned int print_octal(va_list octal, char *flags)
{
	unsigned int byte_size, num;
	int i;

	byte_size = 0;
	num = va_arg(octal, unsigned int);

	if (num == 0)
		return (_putchar(48));

	if (flags)
	{
		for (i = 0; flags[i] != '\0'; i++)
		{
			if (flags[i] == 35)
				byte_size += _putchar(48);
		}
	}
	byte_size += decimal_to_nbase_print(num, 8, 0);
	return (byte_size);
}

/**
 * print_lowercase_hex - prints a hexadecimal from va_list
 * @hex: A decimal number as va_list object
 * Return: size of bytes printed
 */
unsigned int print_lowercase_hex(va_list hex, char *flags)
{
	unsigned int byte_size, num;
	int i;

	byte_size = 0;
	num = va_arg(hex, unsigned int);

	if (num == 0)
		return (_putchar(48));

	if (flags)
	{
		for (i = 0; flags[i] != '\0'; i++)
		{
			if (flags[i] == 35) /*35 is ascii '#'*/
				byte_size += _puts("0x");
		}
	}
	
	byte_size += decimal_to_nbase_print(num, 16, 0);
	return (byte_size);
}

/**
 * print_uppercase_hex - Prints a hexadecimal from va_list
 * @hex: A hexadecimal number as va_list object
 * Return: size of bytes printed
 */
unsigned int print_uppercase_hex(va_list hex, char *flags)
{
	unsigned int byte_size, num;
	int i;

	byte_size = 0;
	num = va_arg(hex, unsigned int);

	if (num == 0)
		return (_putchar(48));

	if (flags)
	{
		for (i = 0; flags[i] != '\0'; i++)
		{
			if (flags[i] == 35) /*35 is ascii '#'*/
				byte_size += _puts("0X");
		}
	}
	
	byte_size += decimal_to_nbase_print(num, 16, 1);
	return (byte_size);
}

/**
 * print_special_char - Prints the hexadecimal for a special character
 * @special_character: the special character va_list object
 * Return: size of bytes printed
 */
unsigned int print_special_char(va_list special_character, char *flags)
{
	unsigned int byte_size;
	char *special_str;

	(void) flags;
	special_str = va_arg(special_character, char *);
	byte_size = print_string_special_chars(special_str);
	return (byte_size);
}

/**
 * print_pointer - Prints the value of a pointer
 * @pointer: the pointer as a va_list object
 * Return: size of bytes printed
 */
unsigned int print_pointer(va_list pointer, char *flags)
{
	unsigned int byte_size;
	unsigned long int ptr;

	(void) flags;
	ptr = va_arg(pointer, unsigned long int);

	if (!ptr)
	{
		byte_size = _puts("(nil)");
		return (byte_size);
	}

	byte_size = long_hexadecimal_print(ptr);
	return (byte_size);
}
