#include <math.h>
#include "search_algos.h"

/**
 * jump_list - Searches for a value in a sorted list of integers using the
 *             Jump search algorithm.
 *
 * @list: Pointer to the head of the list to search in.
 * @size: Number of nodes in list.
 * @value: Value to search for.
 *
 * Return: Pointer to the first node where value is located.
 *         NULL if value is not present in list or if list is NULL.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
    size_t jump = sqrt(size), left = 0, right = 0;
    listint_t *node = NULL;

    if (!list)
        return (NULL);

    right = jump;
    while (right < size && list[right]->n < value)
    {
        printf("Value checked at index [%lu] = [%d]\n", right, list[right]->n);
        left = right;
        right += jump;
    }

    printf("Value found between indexes [%lu] and [%lu]\n", left, right);
    right = right < size ? right : size - 1;
    node = list[left];
    while (node && node->n < value)
    {
        printf("Value checked at index [%lu] = [%d]\n", node->index, node->n);
        node = node->next;
    }
    printf("Value checked at index [%lu] = [%d]\n", node->index, node->n);
    return (node->n == value ? node : NULL);
}
