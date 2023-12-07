#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *slow = head;
listint_t *fst = head;

if (!head)
return (NULL);

while (slow && fst && fst->next)
{
fst = fst->next->next;
slow = slow->next;
if (fst == slow)
{
slow = head;
while (slow != fst)
{
slow = slow->next;
fst = fst->next;
}
return (fst);
}
}

return (NULL);
}
