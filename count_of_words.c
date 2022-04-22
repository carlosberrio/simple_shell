#include "shell.h"
#define SALIDA 0
#define ENTRADA 1

/**
 * count_of_words - Function that evaluates string.
 * @str: string to be counted
 * Return: number of words in the string.
 */

int count_of_words(char *str)
{
int state = SALIDA;
unsigned int cw = 0;
while (*str)
{
if (*str == ' ' || *str == '\n' || *str == '\t'
|| *str == ':' || *str == '=')
state = SALIDA;
else if (state == SALIDA)
{
state = ENTRADA;
++cw;
}
++str;
}
return (cw);
}
