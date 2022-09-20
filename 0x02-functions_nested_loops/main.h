#include<stdarg.h>
#include <unistd.h>
/**
* main - TEXT
*
* Return: Always 0 (Success)
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
