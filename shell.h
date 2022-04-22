#ifndef MAIN_H
#define MAIN_H

/* Libraries */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <errno.h>
#include <stddef.h>
#include <signal.h>
#include <stdbool.h>
#include <dirent.h>
#include <sys/cdefs.h>

/* Own helper Functions */
char *_strcat(char *dest, char *src);
int _strcmp(char *s1, char *s2);
char *_strdup(char *str);
int _strlen(char *string);
void free_buffers(char **buf);
int _strncmp(char *s1, char *s2, int n);

/* Macro */
extern char **environ;

/* Path & Search Handlers */
char *test_path(char **path, char *command);
char *index_path(char *path, char *command);
char *find_path(void);

/* Built-ins Functions */
void print_env(void);
int exit_cmd(void);

/* Core functions */
int main(int argcnt, char **argvtr, char *envvtr[]);
char **tokenizer(char *str, char *worde);
void handle_signal(int m);
int count_of_words(char *str);
int checker(char **cmd, char *buf);
void execution(char *cmds, char **cmdv);
int handle_builtin(char **command, char *line);
void handle_signal(int sn);
void promptuser(void);

/*STRUCTURES*/

struct builtin
{
char *env;
char *exit;
} builtin;

struct flags
{
bool interactive;
} flags;

#endif /* MAIN_H */