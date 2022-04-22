#include "shell.h"

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
* _strncmp - compares two strings up to n bytes
* @s1: compared to s2
* @s2: compared to s1
* @n: number of bytes
*
* Return: difference between s1 and s2
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
