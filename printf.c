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
	unsigned int i;
	unsigned int count;
	unsigned int format_len;
	char next;

	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);  /* Printf returns a negative value on Error */

	count = 0;
	format_len = str_len((char *) format);
	va_start(print_obj, format);

	for (i = 0; i < format_len; i++)
	{
		if (format[i] == '%')
		{
			next = format[i + 1];
			print_ptr = get_print_function(next);

			if (print_ptr)
			{
				count = count + print_ptr(print_obj);
				i = i + 2;
			}
			else if (check_for_some_chars(next) == 1)
			{
				return (-1);
			}
			else
			{
				_putchar(format[i]);
				count++;
			}
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
