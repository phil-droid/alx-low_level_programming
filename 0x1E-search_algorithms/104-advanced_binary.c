#include <stdio.h>
#include "search_algos.h"

/**
 * advanced_binary - Searches for a value in a sorted array of integers.
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index where value is located, or -1 upon failure.
 */
int advanced_binary(int *array, size_t size, int value)
{
    size_t i, half;
    int index;

    if (array == NULL || size == 0)
        return (-1);

    printf("Searching in array: ");
    for (i = 0; i < size; i++)
        printf("%d%s", array[i], i == size - 1 ? "\n" : ", ");

    if (size == 1 && array[0] != value)
        return (-1);

    half = (size - 1) / 2;

    if (array[half] == value)
    {
        if (size % 2 == 0)
            index = half;
        else
            index = half + 1;
        return (index);
    }
    else if (array[half] > value)
        return (advanced_binary(array, half, value));
    else
    {
        index = advanced_binary(array + half + 1, size - half - 1, value);
        if (index == -1)
            return (-1);
        return (index + half + 1);
    }
}
