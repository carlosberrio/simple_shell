#include "main.h"

/**
 * tokenizer - Function that split a string.
 * @s: string to split.
 * @worde: words delimiter.
 * Return: separated words
 */

char **tokenizer(char *str, char *worde)
{
int i = 0, cow = 0;
char **separated_words = NULL;
cow = count_of_words(s);

separated_words = malloc(sizeof(char *) * (cow + 1));
if (separated_words == NULL)
{
perror("Error");
return (NULL);
}
separated_words[0] = strtok(s, worde);
if (splited_words[0] == NULL)
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
