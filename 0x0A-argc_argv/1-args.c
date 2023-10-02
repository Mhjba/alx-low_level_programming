#include <stidio.h>
#include "main.h"

/**
 * main -prints the number of arguments passed to the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */


int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argc - 1);

	return (0);
}
