#include "shell.h"
/**
 *checker- Function that evaluates if is built-in or not
*@cmd: tokenized command
*@buf: allocated memory space from getline
*Return: 1 true 0 false
*/
int checker(char **cmd, char *buf)
{
if (handle_builtin(cmd, buf) == 1)
{
free (cmd);
return (1);
}
else if (handle_builtin(cmd, buf) == 2)
{
free (cmd);
free (buf);
exit (0);
}
return (0);
}
