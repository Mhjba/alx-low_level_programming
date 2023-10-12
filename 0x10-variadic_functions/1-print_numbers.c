#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: the string
 * @n: the number
 * @...: variable of numbers
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nmb;
	unsigned int x;

	va_start(nmb, n);

	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(nmb, int));
		if (x != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(nmb);
}
