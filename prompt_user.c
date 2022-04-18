#include "main.h"

/**
 * promptuser: function calls promt
 * @void: void
 * Return: promt
 */

void promptuser(void)
{
	if ((isatty(STDIN_FILENO) == 1) && (isatty(STDOUT_FILENO) == 1))
		flags.interactive = 1;
	if (flags.interactive)
		write(STDERR_FILENO, "$ ", 2);
}
