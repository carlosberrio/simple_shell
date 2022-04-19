#include "main.h"

/**
 * testpath - function that test the PATH in user environment,
 * tokenize the PATH, concatenates the command to every tokenized path
 * and checks if the command exists.
 * @token: An array of pointers with arguments.
 * Return: if command exists, returns the full path.
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
* index_path - adds path to command
* @path: path of command
* @command: user entered command
*
* Return: buffer containing command with path on success
* NULL on failure
*/
char *index_path(char *path, char *command)
{
char *buf;
size_t i = 0, j = 0;

if (command == 0)
command = "";

if (path == 0)
path = "";

buf = malloc(1024*sizeof(char) * (_strlen(path) + _strlen(command) + 2));
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
* find_path - finds the path from the global enviroment
* Return: NULL if path is not found or path if path is found.
*/
        char *find_path(void)
        {
        int x;
        char **env = environ, *path = NULL;

        while (**env)
        {
            if (_strcmp(*env, "PATH=") == 0)
            {
            path = *env;
            while (*path && x < 5)
            {
             path++;
             x++;
             }
             return (path);
            }
            env++;
            free(path);
            }
            free(env);
        return (NULL);
}
