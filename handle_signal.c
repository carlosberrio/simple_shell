#include "main.h"

/**
 * handlesignal - 
 *  @
 * Return: 
 */

char handlesignal(int l)
{
(void)l;
write(STDERR_FILENO, "\n", 1);
write(STDERR_FILENO, "$ ", 2);

}