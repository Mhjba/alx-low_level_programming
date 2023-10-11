#include"function_pointers.h"


/**
 * print_name - print an name
 * @name: string to char
 * @f: pointer to function
 * Return: void
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
}
