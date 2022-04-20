#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
/**
* _itoa - Function that converts any value from int to string
* @i: Value entered type integer
* @strout: Standar Out
* @base: Base to convert values
* Return: A value type char
*/

char *_itoa(int i, char *strout, int base)
{
char *str = strout;
int digit, sign = 0;

if (i < 0)
{
sign = 1;
i *= -1;
}
while (i)
{
digit = i % base;
*str = (digit > 9) ? ('A' + digit - 10) : '0' + digit;
i = i / base;
str++;
}
if (sign)
{
*str++ = '-';
}
*str = '\0';
_strrev(strout);
return (strout);
}

/**
 * _strlen - function that gets the length of a string
 * @string: string to be evaluated.
 * Return: length of the string
 */

int _strlen(char *string)
{
int i = 0;

while (string[i])
i++;

return (i);
}


/**
 * mycalloc - creates a space to an array
 * @num:
 * @size: 
 * Return: space void or asigns memory space
 */
/**
void *malloc(unsigned int num, unsigned int size)
{
	char *memory;
	unsigned int index = 0;

	if (num == 0 || size == 0)
		return (NULL);
	memory = malloc(num * size);
	if (memory == NULL)
		return (NULL);
	for (; index < (num * size); index++)
		*(memory + index) = 0;
		return (memory);
		free (memory);
}
*/