#include "shell.h"

/**
 * execution - executes commands entered by users
 *@cmds: command
*@cmdv:vector array of pointers to commands
* Return: 0
*/
void execution(char *cmds, char **cmdv)
{
pid_t child_pid;
int status;
char **env = environ;

child_pid = fork();
if (child_pid < 0)
perror(cmds);
if (child_pid == 0)
{
execve(cmds, cmdv, env);
perror(cmds);
free(cmds);
free_buffers(cmdv);
exit(98);
}
else
wait(&status);
}