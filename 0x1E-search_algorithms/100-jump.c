#include <math.h>
#include "search_algos.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * jump_search - Searches for a value in a sorted array of integers using
 *               the Jump search algorithm
 *
 * @array: A pointer to the first element of the array to search in
 * @size: The number of elements in array
 * @value: The value to search for
 *
 * Return: The first index where value is located, otherwise -1
 */
int jump_search(int *array, size_t size, int value)
{
    size_t i = 0, jump = sqrt(size), prev = 0;

    if (array == NULL)
        return (-1);

    while (i < size && array[i] < value)
    {
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);
        prev = i;
        i += jump;
    }

    printf("Value found between indexes [%lu] and [%lu]\n", prev, i);

    i = i > size - 1 ? size - 1 : i;

    while (prev <= i)
    {
        printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
        if (array[prev] == value)
            return (prev);
        prev++;
    }

    return (-1);
}
