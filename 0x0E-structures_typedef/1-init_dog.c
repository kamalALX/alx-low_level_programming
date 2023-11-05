#include <stdio.h>

/**
 * init_dog - a function that initialize a variable of type struct dog
 * @d: pointer to strcut members
 * @name: member
 * @age: member
 * @owner: member
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
