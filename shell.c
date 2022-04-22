#include "shell.h"

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
promptuser();
linesize = getline(&line, &bufsize, stdin);
if (linesize < 0)
{
free(line);
break;
}

command = tokenizer(line," \n\t");

if (command == NULL || *command == NULL || **command == '\0')
continue;
if (checker(command, line))
continue;
path = find_path();
paths = tokenizer(path, "=:");
if (access(command[0], F_OK | X_OK) != 0)
pathcommand = test_path(paths, command[0]);
else
pathcommand = _strdup(command[0]);
if (!pathcommand)
{
perror(argvtr[0]);
free(pathcommand);
free(paths);
free(path);
free(command);
continue;
}
else
execution(pathcommand, command);
free(paths);
free(path);
}
if (linesize < 0 && flags.interactive)
write(STDERR_FILENO, "\n", 1);
return (0);
}
