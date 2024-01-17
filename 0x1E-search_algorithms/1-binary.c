#include "search_algos.h"

/**
 * binary_search - A function that searches for a value in a sorted array
 * of integers
 * @array: A pointer to the first element of the array to search in
 * @size: The number of elements in array
 * @value: the value to search for
 *
 * Return: the index where value is located in ascending order
 * and -1 id array is NULL
 * Description: print the array being searched every time it changes.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, l, r;

	if (array == NULL)
		return (-1);
	for (l = 0, r = size - 1; r >= l;)
	{
		printf("Searching in array: ");
		for (i = l; i < r; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = l + (r - l) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			r = i - 1;
		else
			l = i + 1;
	}
	return (-1);
}
