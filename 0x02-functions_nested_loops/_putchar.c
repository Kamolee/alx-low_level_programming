#include <unistd.h>
/**
 * _putchar - writes the chaacter c to stdout
 * Return: on success .
 * on error -1 is returned
 */

int _putchar(char c)
{ return (write(1, &c, 1));
}	
