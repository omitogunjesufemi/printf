#include "main.h"

/**
 * get_printer_func - selects the correct printer function
 * @s: The format specifier letter value
 *
 * Description: Based on the letter value of the format specifier
 * a printer function is returned.
 *
 * Return: A pointer to a function that receives a va_list and
 * returns void. If @s is invalid, return NULL
 */
void (*get_printer_func(const char s))(va_list)
{
        unsigned int i;
        printer_t ops[] = {
                {"c", print_char},
                {"s", print_string},
                {"%", print_percent},
                {NULL, NULL}
        };

        for (i = 0; ops[i].fmt != NULL; i++)
        {
                if (s == ops[i].fmt[0])
                        return (ops[i].func);
        }
        return (NULL);
}
