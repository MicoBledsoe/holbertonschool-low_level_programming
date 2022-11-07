#include "lists.h"

/**
 * list_len - determines number of nodes in sll
 * @s: h sll
 * Return: nodes in h
 */
size_t list_len(const list_t *s)
{
	size_t nodeNum = 0;

	while (s)
	{
		nodeNum++;
		s = s->next;
	}
	return (nodeNum);
}
