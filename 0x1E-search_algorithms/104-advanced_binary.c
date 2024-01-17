#include "search_algos.h"

/**
 * advanced_binary_recursive - A function that search for a value in a sorted
 * array of integers
 * @array: A pointer to the first element of the array to search
 * @left: Starting index of the array to search
 * @right: Ending index of the array to search
 * @value: Value to search
 *
 * Return: the index where the value is located, and -1 if value is not
 * present
 */
int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (right < left)
		return (-1);

	printf("Searching in array: ");
	for (i = left; i < right; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

	i = left + (right - left) / 2;
	if (array[i] == value && (i == left || array[i - 1] != value))
		return (i);
	if (array[i] >= value)
		return (advanced_binary_recursive(array, left, i, value));
	return (advanced_binary_recursive(array, i + 1, right, value));
}

/**
 * advanced_binary - A function that searches for a value in a sorted
 * array of integers.
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: the value to search for
 *
 * Return: the index where value is located, and -1 if array is NULL or value
 * not present
 * Description: Every time you split the array, you have to print the new
 * array (or subarray) you’re searching in
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);
	return (advanced_binary_recursive(array, 0, size - 1, value));
}
