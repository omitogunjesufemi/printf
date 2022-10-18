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
 * check_for_some_chars - For some characters after % that should fail
 * @c: character to check
 * Return: 1 if it exist, 0 if not
 */
int check_for_some_chars(char c);

/**
 * int_len - This returns the length of an integer
 * @digit: integer to be checked
 * Return: number of digit present in integer
 */
unsigned int int_len(unsigned int digit);

/**
 * str_len - Gets length of a string
 * @s: string
 * Return: length of string
 */
unsigned int str_len(char *s);

/**
 * get_multiple - Gets the highest multiple of 10 which is a factor
 * of the number provided
 */
unsigned int get_multiple(unsigned int);

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
 * _put_int - Prints integer
 * @n: integer
 * Return: number of integers printed
 */
unsigned int _put_int(int n);

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

/**
 * print_integer - prints integer from va_list
 * @integer: va_list onject
 * Return: size of bytes printed
 */
unsigned int print_integer(va_list integer);

typedef unsigned int(*print_function)(va_list);
print_function get_print_function(char format_string);

/**
 * _printf - printf
 * @format: format string
 * Return: byte size printed
 */
int _printf(const char *format, ...);

#endif /*_MAIN_H_*/
