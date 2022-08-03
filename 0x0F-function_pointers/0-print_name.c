#include <stdio.h>
#include "fuction_pointers.h"

/**
 * print_name - prints a name
 * @name : Name to be printed
 * @f : A pointer to a fuction that prints a name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
