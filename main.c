#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

dlistint_t *head = NULL;
dlistint_t *last = NULL;

dlistint_t *current = NULL;

/**
 * insert - creates a doubly linked list and insert data
 * @data: data to be inserted
 *
 * Return: Nothing
 */
void insert(int data)
{
//Allocate memory for new node
dlistint_t *link = (dlistint_t *) malloc(sizeof(dlistint_t));

link->n = data;
link->prev = NULL;
link->next = NULL;

// If head is empty, create new list
if (head == NULL)
{
head = link;
return;
}

current = head;

// move to end of the list
while (current->next != NULL)
current = current->next;

// Insert link at the end of the list
current->next = link;
last = link;
link->prev = current;
}

/**
 * main - entry point
 *
 * Return: 0 on success
 */

int main(void)
{
	insert(10);
	insert(20);
	insert(30);
	insert(1);
	insert(40);
	insert(56);

	dlistint_t *ptr = head;

	print_dlistint(ptr); // tests print_dlistint function
	printf("The number of nodes is: %lu\n", dlistint_len(ptr)); // tests dlistint_len function
	return (0);
}
