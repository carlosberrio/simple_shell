#include "shell.h"

/**
 * handlesignal - 
 *  @
 * Return: 
 */

void handle_signal(int m)
{
(void)m;
write(1, "\n$", 4);

}