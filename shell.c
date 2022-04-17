#include "main.h"

/**
*main - read and execute the command that typed- infinite loop
*@argcnt:argumentg counter
*@argvtr:argument vector
*@envvtr:enviroment vector
*Return:0
*/

int main(int argcnt, char **argvtr, char *envvtr[])
{
char *line = NULL, *pathcommand = NULL, *path = NULL;
size_t bufsize = 0;
ssize_t linesize = 0;
char **command = NULL, **paths = NULL;
(void)envvtr, (void)argvtr;
if (argcnt < 1)
return (-1);
signal(SIGINT, handle_signal);
while (1)
{
free_buffers(command);
free_buffers(paths);
free(pathcommand);
prompt_user();
linesize = getline(&line, &bufsize, stdin);
if (linesize < 0)
break;
info.ln_count++;
if (line[linesize - 1] == '\n')
line[linesize - 1] = '\0';
command = tokenizer(line);
if (command == NULL || *command == NULL || **command == '\0')
continue;
if (checker(command, line))
continue;
path = find_path();
paths = tokenizer(path);
pathcommand = test_path(paths, command[0]);
if (!pathcommand)
perror(argvtr[0]);
else
execution(pathcommand, command);
}
if (linesize < 0 && flags.interactive)
write(STDERR_FILENO, "\n", 1);
free(line);
return (0);
/**
 * fork_execute - create child process and execute cmd
 * @cmd: command or file to execute
 * @p: struct with arguments
 */
void fork_execute(char *cmd, params *p)
{
pid_t check;
int exit_execve;
check = fork();
if (check == 0)
execve(cmd, p->argv, environ);
else
{
wait(&exit_execve);
p->exit_value = WEXITSTATUS(exit_execve);
}
}
/**
 * simple_exec - core of simple_shell
 * @p: struct with all vars
 */
void simple_exec(params *p)
{
struct stat found;
DIR *check_fd = opendir(p->argv[0]);
p->cmd = cmd_path(p->argv);
if (_strcmp(p->argv[0], ".") == 0)
closedir(check_fd);
else if (check_builtin(p) == 1)
return;
else if (check_fd)
{
closedir(check_fd), p->exit_value = 126;
not_permissions(p);
}
else if (p->argv[0][0] == '.' || p->argv[0][0] == '/')
{
if (stat(p->argv[0], &found) == 0)
{
if (access(p->argv[0], X_OK))
not_permissions(p);
else
fork_execute(p->argv[0], p);
}
}
else if (p->cmd)
{
fork_execute(p->cmd, p);
}
else
not_found_error(p);
free(p->cmd);
}
}
