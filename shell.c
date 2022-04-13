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
size_t linesize = 0;
char **command = NULL, **paths = NULL;
(void)envvtr, (void)argvtr;
if (argcnt < 1)
return (-1);
signal(SIGINT, handle_signal);
while (1)
{
//*free_buffers(command);
//*free_buffers(paths);
free(pathcommand);
//*prompt_user();
linesize = getline(&line, &bufsize, stdin);
if (linesize < 0)
break;
info.ln_count++;
if (line[linesize - 1] == '\n')
line[linesize - 1] = '\0';
command = //*tokenizer(line);
if (command == NULL || *command == NULL || **command == '\0')
continue;
if (//*checker(command, line))
continue;
path = //*find_path();
paths = //*tokenizer(path);
pathcommand = //*test_path(paths, command[0]);
if (!pathcommand)
perror(argvtr[0]);
else
//*execution(pathcommand, command);
)
if (linesize < 0 && flags.interactive)
write(STDERR_FILENO, "\n", 1);
free(line);
return (0);
}
