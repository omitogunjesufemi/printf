#include "main.h"

/**
 * _printf - Prints a string using provided format specifiers
 * @format: The string to be printed including format specifiers
 * @...: Variable arguments
 *
 * Return: The total length of the printed sting
 */
int _printf(const char *format, ...)
{
	unsigned int i;
	va_list ap;
	void (*f)(va_list);

	va_start(ap, format);

	i = 0;
	/*Ensure format string was provided*/
	while (format && format[i] != '\0')
	{
		if (format[i] != '%')
		{
			/*Print Normal*/
			_putchar(format[i]);
			i++;
			continue;
		}
		else
		{
			f = get_printer_func(format[i + 1]);

			/*Is the format valid? Did it return a function?*/
			if (f)
			{
				f(ap);
				i += 2; /*Skip the % and next character*/
			}
			else
			{
				_putchar(format[i]);
				i++;
			}
		}
	}

	return (i);
}
