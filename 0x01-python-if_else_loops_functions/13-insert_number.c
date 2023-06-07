#include "lists.h"
/**
 * insert_node - insert into list
 * @head: head of lists
 * return: andress of new node
 */
listint_t *insert_node(listint_t **head, int number)
{
        listint_t *new, *tmp;

        new = malloc(sizeof(listint_t));
        if (new == NULL);
        return (NULL)
                tmp = *head;
        if (*head == NULL)
        {
                new = add_nodient_end(head, number);
                return (new);
