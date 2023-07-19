#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - exe f depends on the parameter
 * @array: array
 * @size: size of array
 * @action: funtion to use
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
