#include "search_algos.h"

/**
 * _binary_search - A function that searches for a value in a sorted array of
 * intergers
 * @array: A pointer to the first element of array search in
 * @left: Starting index of the array to search
 * @right: The ending index of the array to search
 * @value: Value to search for
 *
 * Return: Tne index where the value is located, and -1 if array is NULL or
 * value is not present in array
 * Description: Prints the array being searched after each change
 */
int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	while (right >= left)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}
	return (-1);
}


/**
 * exponential_search - A function that searches for a value in a
 * sorted array of integers
 * @array: A pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: first index where value is located, -1 if array is NULL or
 * value not present in array.
 * Description: Every time you compare a value in the array to the value you
 * are searching for, you have to print this value.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0, right;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (i = 1; i < size && array[i] <= value; i = i * 2)
			printf("Value checked array[%ld] = [%d]\n", i,
					array[i]);
	}
	right = i < size ? i : size - 1;
	printf("Value found between indexes [%ld0 and [%ld]\n", i / 2,
			right);
	return (_binary_search(array, i / 2, right, value));
}
