#include "sort.h"
/**
 *swap_nodes -  swap two nodes in a listint_t
 *@l: a ponter to the header
 *@a: a pointer to first node to swap
 *@b: a pointer to second node to swap
 */
void swap_nodes(listint_t **l, listint_t **a, listint_t *b)
{
	(*a)->next = b->next;
	if (b->next != NULL)
		b->next->prev = *a;
	b->prev = (*a)->prev;
	b->next = *a;
	if ((*a)->prev != NULL)
		(*a)->prev->next = b;
	else
		*l = b;
	(*a)->prev = b;
	*a = b->prev;
}
/**
 *insertion_sort_list -  function that sorts a doubly linked list
 *@list: A pointer to the head of doubly linked list
 *
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *cur, *insert_point, *tmp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	for (cur = (*list)->next; cur != NULL; cur = tmp)
	{
		tmp = cur->next;
		insert_point = cur->prev;
		while (insert_point != NULL && cur->n < insert_point->n)
		{
			swap_nodes(list, &insert_point, cur);
			print_list((const listint_t *)*list);
		}
	}

}
