#include "shell.h"

/**
* handle_builtin - Function that execute  the buil-in functions
* @command: tokenized commands
* @line: input typed
*
* Return: 1 true, 0 false
*/
int handle_builtin(char **command, char *line)
{
struct builtin builtin = {"env", "exit"} ;

if (_strcmp(*command, builtin.env) == 0)
{
print_env();
return (1);
}
else if (_strcmp(*command, builtin.exit) == 0)
{
exit_cmd();
return (2);
}
return (0);
free (line);
free_buffers (command);
/**nueva línea para parámetro no usado */
}
