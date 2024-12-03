#include "lists.h"
/**
 * free_list - Frees a list_t linked list.
 * @head: Pointer to the first node of the list.
 */
void free_list(list_t *head)
{
    list_t *temp;

    while (head != NULL)
    {
        temp = head->next;
        free(head->str);
        free(head);
        head = temp;
    }
}
