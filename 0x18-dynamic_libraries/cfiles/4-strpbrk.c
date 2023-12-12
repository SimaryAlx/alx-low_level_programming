#include "main.h"
#include <stdio.h>
/**
* _strpbrk - get the length of a prefix substring
* @s: string to search from
* @accept: input
* Return: number of characters matched
*/

char *_strpbrk(char *s, char *accept)
{
int i, n;

for (i = 0 ; s[i] != '\0' ; i++)
{
for (n = 0 ; accept[n] != '\0' ; n++)
{
if (s[i] == accept[n])
return (s + i);
}
}
return (NULL);
}
