#include "main.h"
/**
 *_puts - prints string
 *@str: accepts the string
 *Return: nothing
 */
void _puts(char *str)
{
int c;
for (c = 0; str[c] != '\0'; c++)
{
_putchar(str[c]);
}
_putchar('\n');
}
