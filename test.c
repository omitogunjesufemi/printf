#include "main.h"
#include <stdio.h>
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
