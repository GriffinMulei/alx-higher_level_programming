#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - singly linked list
 * @n: interger
 * Description: singly linked list node structure for Helberton project
 */

struct listint_s
{
    int n;
    struct listint_s *next;
};

typedef struct listint_s listint_t;

/* Function prototype */
int is_palindrome(listint_t **head);

#endif /* LISTS_H */

