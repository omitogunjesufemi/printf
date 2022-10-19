#include "main.h"

/**
 * get_print_function - Get the print function for a conversion specifier
 * @format_string: format string
 * Return: function of for printing
 */
print_function get_print_function(char format_string)
{
	int i;

	conversion_specifier options[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_integer},
		{"i", print_integer},
		{"b", print_binary},
		{"o", print_octal}
	};

	for (i = 0; i < 6; i++)
	{
		if (format_string - options[i].specifier[0] == 0)
		{
			return (options[i].print);
		}
	}

	return (NULL);
}
