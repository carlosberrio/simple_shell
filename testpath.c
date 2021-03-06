#include "shell.h"

/**
 * testpath - Function that tests path inside enviroment.
 * @path: tokenized path.
 * @command: array of tokenized commands
 * Return: if command exists, returns the command path.
 */

char *test_path(char **path, char *command)
{
int i = 0;
char *output;

while (path[i])
{
output = index_path(path[i], command);
if (access(output, F_OK | X_OK) == 0)
return (output);
free(output);
i++;
}
return (NULL);
}

/**
* index_path - function that index with succesfull commands
* @path: tokenized path
* @command: array of tokenized commands
* Return: command succesfull path or NULL if fails
*/
char *index_path(char *path, char *command)
{
char *buf = NULL;
size_t i = 0, j = 0;

if (command == NULL)
command = "";

if (path == NULL)
path = "";

buf = malloc(sizeof(char) * (_strlen(path) + _strlen(command) + 2));
if (!buf)
return (NULL);

while (path[i])
{
buf[i] = path[i];
i++;
}

if (path[i - 1] != '/')
{
buf[i] = '/';
i++;
}
while (command[j])
{
buf[i + j] = command[j];
j++;
}
buf[i + j] = '\0';
return (buf);
}

/**
* find_path - function that looks for succesfull path
* Return: NULL = false or path = true.
*/
char *find_path(void)
{
int x = 0;
char **env = environ, *path = NULL;

while (env[x])
{
if (_strncmp(env[x], "PATH", 4) == 0)
{
path = strdup(env[x]);
break;
}
x++;
}
if (!path)
return (NULL);
return (path);
}
