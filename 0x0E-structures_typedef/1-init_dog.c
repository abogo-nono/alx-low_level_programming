/**
 * init_dog - used to initilized a dog.
 * @d: a dog
 * @name: the dog name
 * @age: the dog age
 * @owner: the dog owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(dog));
	}
	d->name = name;
	d->age = age;
	d->owner =  owner;
}
