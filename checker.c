#include "shell.h"
/**
 *checker- checks to see weather its a built in function
*@cmd: tokenized user input
*@buf: line drived from getline function
*Return: 1 if cmd works 0 if cmd is not
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
