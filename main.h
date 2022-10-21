#ifndef _MAIN_H_
#define _MAIN_H_

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <limits.h>

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
unsigned int int_len(int digit);

/**
 * uint_len - This returns the length of an unsigned integer
 * @digit: integer to be checked
 * Return: number of digit present in integer
 */
unsigned int uint_len(unsigned int digit);

/**
 * get_remainder_count - Gets the count of remainder
 * for decimal to binary conversion
 * @num: the decimal number
 * Return: remainder count
 */
int get_remainder_count(unsigned int num);


/**
 * get_long_int_remainder_count - Gets the count of remainder
 * for long int decimal to hexadecimal conversion
 * @num: the decimal number
 * Return: remainder count
 */
int get_long_int_remainder_count(long int num);

/**
 * str_len - Gets length of a string
 * @s: string
 * Return: length of string
 */
unsigned int str_len(char *s);

/**
 * reverse_string - Reverses a string
 * @s: The pointer to the string to be reversed
 * Return: void
 */
void reverse_string(char *s);

/**
 * print_string_special_chars - Prints a string that contains
 * unprintable special chars
 * @str: The string to print
 * Return: The number of bytes printed
 */
unsigned int print_string_special_chars(char *str);

/**
 * get_multiple - Gets the highest multiple of 10 which is a factor
 * of the number provided
 * @n: the number whose multiple is a factor of
 * Return: multiple integer
 */
unsigned int get_multiple(unsigned int n);

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
 * _put_uint - Prints unsigned integer
 * @n: integer
 * Return: number of integers printed
 */
unsigned int _put_uint(unsigned int n);

/**
 * decimal_to_nbase_print - This converts a decimal number to
 * binary, then prints
 * @num: decimal number
 * @nbase: The number base to convert to
 * @hex_flag: 0 default, 1 for UPPERCASE hex values
 * Return: byte size printed
 */
unsigned int decimal_to_nbase_print(unsigned int num, int nbase, int hex_flag);

/**
 * long_hexadecimal_print - Prints the hexadecimal of a long int
 * @num: the long integer
 * Return: byte size printed
 */
unsigned int long_hexadecimal_print(long int num);

/**
 * print_char - Prints character
 * @character: character
 * Return: number of bytes printed
 */
unsigned int print_char(va_list character);

/**
 * get_remainder - gets the remainder of a base division
 * @num: The number to be divided
 * @nbase: The base to be used in the division
 * @hex_flag: Differentiates lowercase(1) and UPPERCASE(2) hex values
 *
 * Return: char value of remainder
 */
char get_remainder(unsigned int num, int nbase, int hex_flag);

/**
 * long_hex_remainder - Remainder for during long int to hexadecimal conversion
 * @num: the long int
 * Return: char value of remainder
 */
char long_hex_remainder(long int num);

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

/**
 * print_binary - Prints binary from unsigned int in va_list
 * @binary: va_list object holding unsigned int
 * Return: size of bytes printed
 */
unsigned int print_binary(va_list binary);

/**
 * print_uinteger - Prints an unsigned integer from va_list
 * @integer: va_list object
 * Return: size of bytes printed
 */
unsigned int print_uinteger(va_list integer);

/**
 * print_octal - Prints octal from unsigned int in va_list
 * @octal: va_list object holding unsigned int
 * Return: size of bytes printed
 */
unsigned int print_octal(va_list octal);

/**
 * print_lowercase_hex - Prints a lowercase hex from int in va_list
 * @hex: va_list object holding unsigned int
 * Return: size of bytes printed
 */
unsigned int print_lowercase_hex(va_list hex);

/**
 * print_uppercase_hex - Prints a lowercase hex from int in va_list
 * @hex: va_list object holding unsigned int
 * Return: size of bytes printed
 */
unsigned int print_uppercase_hex(va_list hex);

/**
 * print_special_char - Prints the hexadecimal for a special character
 * @special_character: the special character va_list object
 * Return: size of bytes printed
 */
unsigned int print_special_char(va_list special_character);

/**
 * print-pointer - Prints the value of a pointer variable
 * @pointer - va_list object
 * Return: size of bytes printed
 */
unsigned int print_pointer(va_list pointer);

typedef unsigned int(*print_function)(va_list);
print_function get_print_function(char format_string);

/**
 * _printf - printf
 * @format: format string
 * Return: byte size printed
 */
int _printf(const char *format, ...);

#endif /*_MAIN_H_*/
