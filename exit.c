#include "shell.h"

/**
* exit_cmd - handles the exit command
* @command: tokenized command
* @line: input read from stdin
*
* Return: no return
*/
void exit_cmd(void)
{
    /**free_buffers(command);
free(line);*/
exit(0);
}
