#include "lists.h"
/*
* add_node - add a new node to the list
* @newnode: the node to add
* return: 
**/
list_t *add_node(list_t **head, const char *str)
{
    list_t *newnode = (list_t *)malloc(sizeof(list_t));
    
    if (newnode == NULL)
    {
        return NULL;
    }
    
    newnode->str = strdup(str);
    newnode->next = *head;
    *head = newnode;
    
    return newnode;
}
