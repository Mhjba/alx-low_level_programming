#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @name: name to initialize
 * @age: age to initializ
 * @owner: owner to initializ
 *discription: initializ variable of struct dog
 *Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
