#include "shell.h"

/**
 * tokenizer - Function that create tokens after the typed text.
 * @str: pointer string that contains succesfull path
 * @worde: character delimiter
 * Return: Tokenized string.
 */

char **tokenizer(char *str, char *worde)
{
int i = 0, cow = 0;
char **separated_words = NULL;
cow = count_of_words(str);
separated_words = malloc(sizeof(char *) * (cow + 1));
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
for (i = 1; i < cow + 1; i++)
{
separated_words[i] = strtok(NULL, worde);
}
return (separated_words);
}
