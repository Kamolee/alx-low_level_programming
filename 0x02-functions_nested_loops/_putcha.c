#include<unistd.h>

/**
 * putchar writes the character c to stdout
 * return: on success 1
 * on error -1 is returned
 */

int _putchar(char c)
{ return (write(1,&c,1));
}	
