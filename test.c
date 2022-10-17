#include "main.h"
#include <stdio.h>

int _printf(const char *format, ...)
{
	print_function print_ptr;
	va_list print_obj;
	int i;
	unsigned int count;
	char *fmt;
	char next;

	count = 0;
	va_start(print_obj, format);

	for (i = 0; format[i] != '\0'; i++)
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
			else
			{
				_putchar(format[i]);
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


/**
 * main - entry point
 * Return 0 always
 */
int main(void)
{
	int len;
	char a = 'a';

	len = _printf("Mello%c\n", a);
	printf("%d\n", len);

	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");

	_printf("Unknown:[%r]\n");

	_printf("Percent:[%%]\n");
	_printf("Percent:[%%]\n");
	return (0);
}
