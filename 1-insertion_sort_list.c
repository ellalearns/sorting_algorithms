#include "sort.h"

/**
 * insertion_sort_list - sort a doubly linked list with insertion sort method
 * @list: the list to be sorted
 */
void insertion_sort_list(listint_t **list)
{
    listint_t *currentNode;
    listint_t *prevNode;
    size_t list_size;

    currentNode = *list;

    while (currentNode)
    {
        currentNode = currentNode->next;
        list_size += 1;
    }

    while (currentNode)
    {
        size_t moving_index = 0;
        size_t current_index = 1;

        while (currentNode->prev != NULL)
        {
            currentNode = currentNode->prev;
        }

        while (moving_index < current_index)
        {
            currentNode = currentNode->next;
            moving_index += 1;
        }

        while (currentNode->prev != NULL)
        {
            prevNode = currentNode->prev;
            if (currentNode->n < prevNode->n)
            {
                listint_t temp1 = prevNode->next;
                listint_t temp2 = prevNode->prev;
                listint_t temp3 = currentNode->next;
                listint_t temp4 = currentNode->prev;
                listint_t temp5 = currentNode->next->prev;
                listint_t temp6 = prevNode->prev->next;

                prevNode->next = temp5;
                prevNode->prev = temp3;
                currentNode->next = temp2;
                currentNode->prev = temp6;

                print_list(*list);
            }
            currentNode = currentNode->prev;
        }
        currentNode = currentNode->next;
        current_index += 1;
    }
}
