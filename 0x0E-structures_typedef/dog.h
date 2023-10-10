#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog struct
 * @name: dog name
 * @age: dog age
 * @owner: dog onwer
 *
 * decription: struct dog
 **/

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
#endif
