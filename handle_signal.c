#include "main.h"

/**
 * handlesignal - 
 *  @
 * Return: 
 */

char handlesignal(void)
{
int l;
write(STDERR_FILENO, "\n", 1);
write(STDERR_FILENO, "$ ", 2);
(void)l;
}