#include "main.h"

/**
 * testpath - function that test the PATH in user environment,
 * tokenize the PATH, concatenates the command to every tokenized path
 * and checks if the command exists.
 * @token: An array of pointers with arguments.
 * Return: if command exists, returns the full path.
 */

char *testpath(char **token)
{

int r = 0, k = 0;
char *path = NULL, *path_new = NULL, **tokenized_path = NULL;
for (r = 0; environ[r]; r++)
{
if (_strcmp(environ[r], "PATH", 4) != NULL)
{
path = _strdup(environ[r]);
break;
}
}
if (path == NULL)
return (NULL);
tokenized_path = tokenizer(path, "=:");
for (k = 1; tokenized_path[k]; k++)
{
path_new = _strdup(tokenized_path[k]);
_strcat(path_new, "/");
_strcat(path_new, token[0]);
if (access(path_new, F_OK) == 0)
{
free(path);
free(tokenized_path);
return (path_new);
}
free(path_new);
}
free(path);
free(tokenized_path);
return (NULL);
}
