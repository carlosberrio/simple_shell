#include "shell.h"

/**
* free_buffers - Function that release double pointers
* @buf: double pointers to be released
* Return: no return
*/
void free_buffers(char **buf)
{
    
int i = 0;

if (!buf || buf == NULL)
return;
while (buf[i])
{
free(buf[i]);
i++;
}
free(buf);
}
