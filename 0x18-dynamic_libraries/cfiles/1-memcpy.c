#include "main.h"

/**
* _memcpy - The function copies 
* @dest: To memory area
* @src: From memory area
* @n: Bytes
* Return: Always 0 (Success)
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0 ; i < n ; i++)
dest[i] = src[i];
return (dest);
}
