#include "lists.h"


void printsent(void)__attribute__ ((constructor));
/**
 * printsent - prints a sentence before the main
 *
 * function is executed
 */

void printsent(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
