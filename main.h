#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

int _printf(const char *, ...);
int _putchar(const char c);
unsigned int _strlen(const char *);
void (*get_printer_func(char s))(va_list);
void print_char(va_list);
void print_string(va_list);
void print_percent(va_list);

typedef struct printer
{
	char *fmt;
	void (*func)(va_list);
} printer_t;


#endif /*MAIN_H*/
