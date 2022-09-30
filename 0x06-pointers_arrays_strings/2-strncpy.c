#include "main.h"
#include <string.h>

/**
* *_strncpy - function taht copies a string.
*
* @dest: a string
* @src: a string.
* @n: character(s).
*
* Return: 0 is success.
*/

char *_strncpy(char *dest, char *src, int n)
{
{
	int k;

	for (k = 0; k < n && src[k] != '\0'; k++)
		dest[k] = src[k];
	for ( ; k < n; k++)
		dest[k] = '\0';

	return (dest);
} 
