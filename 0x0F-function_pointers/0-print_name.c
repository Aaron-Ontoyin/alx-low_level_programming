#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: pointer to name
 * @f: pointer to actual funtion that prints the name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
