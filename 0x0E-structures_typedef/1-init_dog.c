#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initializes a variable of type
 * @d: pointer
 * @name: name
 * @age: age to initialize
 * @owner: owner
 *
 * Description:
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
	}
	d.name = name;
	d.age = age;
	d.owner = owner;
}