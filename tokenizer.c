#include "shell.h"

/**
 * tokenizer - Function that split a string.
 * @str: string to split.
 * @worde: words delimiter.
 * Return: separated words
 */

char **tokenizer(char *str, char *worde)
{
int i = 0, cow = 0;
char **separated_words = NULL;
cow = count_of_words(str);
separated_words = malloc(1024 * sizeof(char *) * (cow + 1));
/**separated_words = malloc(cow,1024);
cow = count_of_words(str);*/
printf("%s \n", str);
/**separated_words = malloc(sizeof(char *) * (cow + 1));*/
if (separated_words == NULL)
{
perror("Error");
return (NULL);
}
separated_words[0] = strtok(str, worde);
/**
if (separated_words[0] == NULL)
{
free(separated_words[0]);
free(separated_words);
return (NULL);
}
for (i = 1; i < cow; i++)
{
separated_words[i] = strtok(NULL, str);
=======
else if (separated_words[0] != NULL)
{
    separated_words = strtok(NULL," ");
}
*/
for (i = 1; i < cow; i++)
{
separated_words[i] = strtok(NULL, worde);
}
return (separated_words);
free(separated_words);
}



/**
 * REALLOC
 void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *s;

	if (new_size > old_size)
	{
		s = malloc(new_size);
		free(ptr);
		return (s);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		s = malloc(new_size);
		free(ptr);
		return (s);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}

 */