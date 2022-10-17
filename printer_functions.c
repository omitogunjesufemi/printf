#include "main.h"

/**
 * print_char - Prints a single character
 * @ap: The variadic list object
 *
 * Return: void
 */
void print_char(va_list ap)
{
	char c = va_arg(ap, int);

	write(1, &c, 1);
}

/**
 * print_string - Prints a string
 * @ap: The variadic list object
 *
 * Return: void
 */
void print_string(va_list ap)
{
	char *str = va_arg(ap, char*);
	unsigned int i;

	for (i = 0; str[i]; i++)
	{
		_putchar(str[i]);
	}
}

/**
 * print_percent - Prints a percentage character
 * @ap: The variadic list object
 *
 * Return: void
 */
void print_percent(va_list ap)
{
	(void)ap;
	/*char s = va_arg(ap, int);*/
	_putchar(37);
}
