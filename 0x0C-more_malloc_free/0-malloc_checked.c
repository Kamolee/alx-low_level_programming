#include "main.h"
#include <stdlib.h>
/**
 * *malloc_checked- allocates memry using malloc
 * @b: number of bytes
 *
 * return:a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
int *ptr;
ptr = malloc(b);
if (ptr == NULL)
exit(98);
return (ptr);
}
