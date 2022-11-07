#include "lists.h"

/**
 * free_list - function that dracs the sll
 * @head: sll thats about to end
 * Return: vel'koz type
 */
void free_list(list_t *head)
{
	list_t *targetCycler;

	while (head)
	{
		targetCycler = head->next;
		free(head->str);
		free(head);
		head = targetCycler;
	}
}
