#include "main.h"

/**
 * prompt_user: function calls promt
 * @void: void
 * Return: promt
 */

char prompt_user(void)
{
if ((isatty(STDIN_FILENO) == 1) && (isatty(STDOUT_FILENO) == 1)){
flags.interactive = 1;
}
if (flags.interactive){
write(STDERR_FILENO, "$ ", 2);
}
}
