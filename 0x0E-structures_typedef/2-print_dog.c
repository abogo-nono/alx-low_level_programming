#include <stdio.h>
#include "dog.h"

/**
 * print_dog - used to print dog data
 * @d: a dog
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		d->age ? printf("Age: %f\n", d->age) : printf("Age: (nil)\n");
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
