#include<stdio.h>
#include<time.h>
#include<string.h>

/**
* main - TEXT
*
* Return: Always 0 (Success)
*/
int main(void)
{       
char alph[26] = "zyxwvutsrqponmlkjihgfedcba";
int x;

for ( x = 0; x < 26; x++)
putchar(alph[x]);
putchar('\n');
return (0);
}     
