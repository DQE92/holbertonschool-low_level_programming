#include "lists.h"
/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: Double pointer to the head of the list.
 * @str: String to be duplicated and added as the value of the new node.
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
    list_t *new_node, *temp;
    char *dup_str;
    size_t str_len = 0;

    if (str)
    {
        dup_str = strdup(str);
        if (!dup_str)
            return (NULL);
        while (str[str_len])
            str_len++;
    }
    else
    {
        dup_str = NULL;
    }

    new_node = malloc(sizeof(list_t));
    if (!new_node)
    {
        free(dup_str);
        return (NULL);
    }

    new_node->str = dup_str;
    new_node->len = str_len;
    new_node->next = NULL;

    if (*head == NULL)
    {
        *head = new_node;
    }
    else
    {
        temp = *head;
        while (temp->next)
            temp = temp->next;

        temp->next = new_node;
    }

    return (new_node);
}
