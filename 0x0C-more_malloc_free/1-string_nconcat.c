#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat- concatenates n bytes of a string
 * to another string
 * @s1:string to append to
 * @s2:string to concatenate from
 * @n:number of bytes fron s1 to cocatenate to s1
 *
 * return:pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{char *p;
unsigned int i = 0, j = 0;
unsigned int leng1 = 0, leng2 = 0;

while (s1 && s1[leng1])
leng1++;
while (s2 && s2[leng2])
leng2++;

if (n < leng2)
p = malloc(sizeof(char) * (leng1 + (n + 1)));
else
p = malloc(sizeof(char) * (leng1 + leng2)+1);

if (!p)
return (NULL);

while (i < leng1)

p[i] = s1[i];
i++;

while (n < leng2 && i < (leng1 + n))
p[i++] = s2[j++];

while (n >= leng2 && i < (leng1 + leng2))
p[i++] = s2[j++];
p[i] = '\0';
return (p);
}
