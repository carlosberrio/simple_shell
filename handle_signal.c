#include "shell.h"

/**
 * handlesignal - Function that manage CRT + d.
 * @m: integer
 * Return: void
 */

void handle_signal(int m)
{
(void)m;
write(1, "\n$", 4);
}
