#include"main.h"
#include <stdlib.h>
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
}
