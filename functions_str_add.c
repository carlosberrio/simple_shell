#include "shell.h"

/**
* _strcat - function that concatenates two strings
* @dest: pointer string where the result is saved.
* @src: pointer string that will be copied in dest.
* Return: string dest + src
*/

char *_strcat(char *dest, char *src)
{
int n = 0;
int i = _strlen(dest);
dest = malloc(sizeof(char) * (_strlen(dest)));
src = malloc(sizeof(char) * (_strlen(src)));

for (n = 0; src[n] != '\0'; n++)
{
dest[i] = src[n];
i++;
}
return (dest);
}

/**
* _strcmp - function that compares two strings.
* @s1: pointer string.
* @s2: pointer string.
* Return: 0 = equal, 1 = different.
*/

int _strcmp(char *s1, char *s2)
{
int i;

for (i = 0; s1[i] != '\0'; i++)
if (s1[i] != s2[i])
return (-1);
return (0);
}


/**
 * _strdup -  function that duplicates given string
 * @str: string duplicated and stored in a new memory space
 * Return: string that is duplicated and allocated
 */

char *_strdup(char *str)
{
int i = 0, j = 0;
char *new_s = NULL;

if (str == NULL)
return (NULL);

i = _strlen(str);

new_s = malloc(sizeof(char) * (i + 1));
if (new_s == NULL)
{
perror("./hsh");
return (NULL);
}
if (i == 0 || new_s == 0)
return (NULL);
while (j < (i + 1))
{
new_s[j] = str[j];
j++;
}
return (new_s);
}
