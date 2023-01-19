#include "function_pointers.h"

/**
 * int_index - searches for index of an int in an array
 *@array: the array
 *@size: size of array
 *@cmp: pointer to the functino for comparison during search
 *Return: index of the searched int or -1 if not found
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(*(array + i)))
			return (i);
	}

	return (-1);
}
