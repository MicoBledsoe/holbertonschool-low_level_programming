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
for (u = 48; u < 58; u++)
{
if (u != 50 && u != 52)
_putchar(u);
}
_putchar('\n');
}
