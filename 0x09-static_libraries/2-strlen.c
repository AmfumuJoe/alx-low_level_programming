#include "main.h"
/**
 *_strlen - counts the length of the string
 *@s: accepts string
 *Return: the count
 */
int _strlen(char *s)
{
int i = 0;
while (s[i] != '\0')
i++;
return (i);
}
