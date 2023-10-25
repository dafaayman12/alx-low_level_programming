#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i;
listint_t *n_w;
listint_t *temp = *head;

n_w = malloc(sizeof(listint_t));
if (!n_w || !head)
return (NULL);

n_w->n = n;
n_w->next = NULL;

if (idx == 0)
{
n_w->next = *head;
*head = n_w;
return (n_w);
}

for (i = 0; temp && i < idx; i++)
{
if (i == idx - 1)
{
n_w->next = temp->next;
temp->next = n_w;
return (n_w);
}
else
temp = temp->next;
}

return (NULL);
}
