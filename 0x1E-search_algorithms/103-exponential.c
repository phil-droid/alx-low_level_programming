#include <stdio.h>
#include "search_algos.h"

/**
 * exponential_search - searches for a value in a sorted array of integers
 * using the Exponential search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: the first index where value is located, or -1 on failure
 */
int exponential_search(int *array, size_t size, int value)
{
    size_t bound = 1;

    if (array == NULL || size == 0)
        return (-1);

    while (bound < size && array[bound] < value)
    {
        printf("Value checked array[%ld] = [%d]\n", bound, array[bound]);
        bound *= 2;
    }

    printf("Value found between indexes [%ld] and [%ld]\n", bound / 2, bound - 1);

    return binary_search(array, bound / 2, (bound < size ? bound : size), value);
}

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @start: index of the first element to search in
 * @end: index of the last element to search in
 * @value: value to search for
 *
 * Return: the index where value is located, or -1 on failure
 */
int binary_search(int *array, size_t start, size_t end, int value)
{
    size_t mid, i;

    while (start < end)
    {
        printf("Searching in array: ");
        for (i = start; i < end; i++)
        {
            printf("%d", array[i]);
            if (i < end - 1)
                printf(", ");
        }
        printf("\n");

        mid = (start + end - 1) / 2;
        if (array[mid] == value)
            return (mid);
        else if (array[mid] < value)
            start = mid + 1;
        else
            end = mid;
    }

    return (-1);
}
