#include"main.h"
#include <stdlib.h>

/**
 * _memset -adds constant byte to memor
 * @s: memory area
 * @b: char to copy
 * @n: number of times to coby b
 *
 * return: pointer to the memory 
 */
char *_memset(char *s, char b,unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}



/**
 * _calloc function allocates memory for an array
 * @nmemb - elements
 * @size -  bytes
 *
 * return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char  *ptr;
ptr = malloc(size * nmemb);
if (nmemb == 0 || size == 0)
return(NULL);

if(ptr == NULL)
return (NULL);
_memset(ptr,0, nmemb * size);
return (ptr);
}
