#include"function_pointers.h"
#include<stdio.h>

/**
 * print_name - print an name
 * @name: string to char
 * @f: pointer to function
 * Return: 0
 **/
void print_name(char *name, void (*f)(char *));
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
