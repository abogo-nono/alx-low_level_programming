#ifndef DOG_H
#define DOG_H

/**
 * struct dog - used to represent a dog
 * @name: dog name
 * @age: og age
 * @owner: dog owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog;

#endif
