#ifndef _MAIN_H_
#define _MAIN_H_

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct specifier - Struct specifier
 * @specifier: format conversion specifier
 * @print: the print function for the conversion specifier
 */
typedef struct specifier
{
	char *specifier;
	unsigned int (*print)(va_list);
} conversion_specifier;

/**
 * str_len - Gets length of a string
 * @s: string
 * Return: length of string
 */
unsigned int str_len(char *s);

/**
 * _putchar - Print a character
 * @c: character
 * Return: number of bytes printed
 */
unsigned int _putchar(char c);

/**
 * _puts - Print string
 * @s: string
 * Return: number of bytes printed
 */
unsigned int _puts(char *s);

/**
 * print_char - Prints character
 * @character: character
 * Return: number of bytes printed
 */
unsigned int print_char(va_list character);

/**
 * print_string - prints the string from va_list
 * @string: va_list object
 * Return: size of bytes printed
 */
unsigned int print_string(va_list string);

/**
 * print_percent - prints percent from va_list
 * @character: va_list object
 * Return: size of bytes printed
 */
unsigned int print_percent(va_list __attribute__((unused)) character);

typedef unsigned int(*print_function)(va_list);
print_function get_print_function(char format_string);

/**
 * _printf - printf
 * @format: format string
 * Return: byte size printed
 */
int _printf(const char *format, ...);

#endif /*_MAIN_H_*/
