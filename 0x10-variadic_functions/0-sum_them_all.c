#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: the number
 * @...: avriable number of paramerts to calculate the sum of
 *
 * description: returns the sum of all its parameters
 * Return: 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list con;
	unsigned int i, sum = 0;

	va_start(con, n);

	for (i = 0; i < n; i++)
		sum += va_arg(con, int);
	va_end(con);

	return (sum);
}

