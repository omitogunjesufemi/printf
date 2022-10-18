#include "main.h"

/**
 * _printf - printf
 * @format: format string
 * Return: byte size printed
 */
int _printf(const char *format, ...)
{
	print_function print_ptr;
	va_list print_obj;
	unsigned int count, i, format_len;
	char next;

	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	va_start(print_obj, format);
	count = 0;
	format_len = str_len((char *) format);

	for (i = 0; i < format_len; i++)
	{
		if (format[i] == '%')
		{
			next = format[i + 1];
			print_ptr = get_print_function(next);

			if (print_ptr)
			{
				count = count + print_ptr(print_obj);
				i = i + 1;
				continue;
			}
			else if (check_for_some_chars(next) == 1)
				return (-1);

			_putchar(format[i]);
			count++;
		}
		if (format[i] != '%')
		{
			_putchar(format[i]);
			count++;
		}
	}
	va_end(print_obj);
	return (count);
}
