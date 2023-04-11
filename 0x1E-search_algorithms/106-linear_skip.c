#include "search_algos.h"

/**
 * linear_skip - searches for a value in a sorted skip list of integers
 *
 * @list: pointer to the head of the skip list to search in
 * @value: value to search for
 *
 * Return: pointer to the first node where value is located, or NULL
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
    skiplist_t *node, *jump;

    if (list == NULL)
        return (NULL);

    jump = list;
    while (jump->express != NULL && jump->express->n < value)
    {
        printf("Value checked at index [%lu] = [%d]\n",
               jump->express->index, jump->express->n);
        jump = jump->express;
    }

    node = jump;
    while (node != NULL && node->n < value)
    {
        printf("Value checked at index [%lu] = [%d]\n",
               node->index, node->n);
        node = node->next;
    }

    if (node != NULL && node->n == value)
    {
        printf("Value checked at index [%lu] = [%d]\n",
               node->index, node->n);
        return (node);
    }
    else
    {
        return (NULL);
    }
}
