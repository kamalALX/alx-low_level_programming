#include "function_pointers.h"

/**
 * print_name - a function that prints a name.
 *
 * @name: pointer to the string to print.
 * @f: pointer to function
*/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	(void)(*f)(name);
}
