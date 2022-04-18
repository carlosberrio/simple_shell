#include "main.h"

/**
 * tokenizer - Function that split a string.
 * @str: string to split.
 * @worde: words delimiter.
 * Return: separated words
 */

char **tokenizer(char *str, const char *worde)
{
int i = 0, cow = 0;
char **separated_words = NULL;
cow = count_of_words(str);

separated_words = malloc(1024);
if (separated_words == NULL)
{
perror("Error");
return (NULL);
}
separated_words[0] = strtok(str, worde);
if (separated_words[0] == NULL)
{
free(separated_words[0]);
free(separated_words);
return (NULL);
}
for (i = 1; i < cow; i++)
{
separated_words[i] = strtok(NULL, worde);
}
return (separated_words);
}
