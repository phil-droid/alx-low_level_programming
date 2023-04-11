#include <stdio.h>

/**
 * linear_search - performs linear search
 * @array: the integer array
 * @size: its size
 * @value: value to search for
 *
 * Return: the index found or -1
 */

int linear_search(int *array, size_t size, int value) {
    if (array == NULL) {
        return -1;
    }
    for (size_t i = 0; i < size; i++) {
        printf("Comparing %d to %d\n", array[i], value);
        if (array[i] == value) {
            return i;
        }
    }
    return -1;
}
