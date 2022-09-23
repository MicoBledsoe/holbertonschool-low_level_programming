#include "main.h"

/**
 * print_most_numbers - upper case characters
 *
 * Return: Always 0 (Success)
 *
 */
void print_most_numbers(void)
{
int u;
for (u = '0'; u < '10'; u++)
{
if (u != '2' && u != '4')
_putchar(u);
}
_putchar('\n');
}
