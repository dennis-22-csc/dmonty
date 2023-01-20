#ifndef LISTS_H
#define LISTS_H

#include "monty.h"

/* list_funcs1.c */

size_t dlistint_len(const dlistint_t *h);

dlistint_t *add_dnodeint(dlistint_t **head, const int n);

size_t print_dlistint(const dlistint_t *h);

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);

#endif

