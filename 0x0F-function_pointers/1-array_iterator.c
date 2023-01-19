#include "function_pointers.h"

/**
 * array_iterator - executes function called action with each element of array
 *@array: array passed
 *@size: the size of the array.
 *@action: this a function
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && size && action)
	{
		for (i = 0; i < size; i++)
			action(*(array + i));
	}
}
