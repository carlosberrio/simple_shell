#include "shell.h"

/**
 * execution - Function that execute the entered command from user
 * @cmds: typed command by user
 * @cmdv: commands vector result from tokenizer
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
}
else
{
wait(&status);
free(cmdv);
free(cmds);
}
}
