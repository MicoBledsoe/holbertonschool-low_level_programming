#include "main.h"
#include <stdio.h>

/**
 * swap_int - swap
 * @a: first
 * @b: second
 * Return: none
 */
void swap_int(int *a, int *b)
{
int c = *a;
*a = *b;
*b = c;
}
