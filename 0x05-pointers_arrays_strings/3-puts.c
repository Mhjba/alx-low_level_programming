#include "main.h"

/*
 * _puts - prints a string followd by a new line to stdout.
 * @str: string to print
 */

void _puts(char *str)
{
	for (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchr('\n');
}
