#include "shell.h"

/**
 * _strlen - function that gets the lenght 
 * @string: string to be tested
 * Return: string lenght
 */

int _strlen(char *string)
{
int i = 0;

while (string[i])
i++;

return (i);
}

/**
* _strncmp - compares two strings with the given byte number
* @s1: pointer string to be compared
* @s2: pointer string to be compared
* @n: byte numbers
* Return: difference between given pointer strings
*/
int _strncmp(char *s1, char *s2, int n)
{
int i;

for (i = 0; s1[i] && s2[i] && i < n; i++)
{
if (s1[i] != s2[i])
return (s1[i] - s2[i]);
}
return (0);
}
