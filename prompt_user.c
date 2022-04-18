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
<<<<<<< HEAD
if (flags.interactive)
{
write(STDERR_FILENO, "$ ", 2);
=======
}
if (flags.interactive){
write(STDERR_FILENO, "$ ", 2);
}
>>>>>>> be31d2edea94d6d9b757d8c2a36b57f3cd78e376
}
