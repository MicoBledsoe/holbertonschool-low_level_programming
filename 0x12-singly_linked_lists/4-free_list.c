#include "lists.h"

/**
 * free_list - function that dracs the sll
 * @head: sll thats about to end
 * Return: vel'koz type
 */
void free_list(list_t *tail)
{
	list_t *targetCycler;

	while (tail)
	{
		targetCycler = tail->next;
		free(tail->str);
		free(tail);
		head = targetCycler;
	}
}
