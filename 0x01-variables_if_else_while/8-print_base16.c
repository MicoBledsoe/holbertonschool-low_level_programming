#include<stdio.h>
#include<string.h>

/**
* main - TEXT
*
* Return: Always 0 (Success)
*/
int main(void)
{       
char alp[16] = "0123456789abcdef";
int y;

for (y = 0; y < 16; y++)
putchar(alp[y]);
putchar('\n');
return (0);
}
