#include "shell.h"

/**
 * promptuser: Function that calls prompt and write $.
 * @void: void
 * Return: write $ character.
 */

void promptuser(void)
{
if ((isatty(STDIN_FILENO) == 1) && (isatty(STDOUT_FILENO) == 1))
flags.interactive = 1;
if (flags.interactive)
write(STDERR_FILENO, "$ ", 2);
}
