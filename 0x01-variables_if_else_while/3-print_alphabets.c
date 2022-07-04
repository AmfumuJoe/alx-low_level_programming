#include <stdio.h>

/**
 * main - Entry point
 * Return:0
 */
int main(void)
{
int x;
for (x = 'a'; x <= 'z'; x++)
{
if (x != 'A' && x != 'Z')
{
putchar (x);
}
}
putchar('\n');
return (0);
}
