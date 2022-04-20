#ifndef MAIN_H
#define MAIN_H

/* STD LIBRARIES */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>
/**#include <stddef.h>
#include <signal.h>
#include <stdbool.h>
#include <dirent.h>
#include <sys/cdefs.h>
#include <sys/wait.h>*/
#include <sys/stat.h>

typedef struct params
{
	char **argv;
	int *loop;
	struct stat found;
	char *buff;
	char *cmd;
	char *name;
	int exit_value;
} params;


/* PROTOTYPES */
char **tokenizer(char *str, char *worde);
char *_strrev(char *str);
char *_strcat(char *dest, char *src);
int _strcmp(char *s1, char *s2, int n);
char *_strdup(char *str);
int _strlen(char *string);
void handle_signal(int m);
int count_of_words(char *str);
int checker(char **cmd, char *buf);
void print_env(void);
void free_buffers(char **buf);
/** void exit_cmd(char **command, char *line); **/
void exit_cmd(void);
void execution(char *cmds, char **cmdv);
int _putchar(char c);
char *_itoa(int i, char *strout, int base);
void print_error(char *program_name, char *input, int error_num);
int handle_builtin(char **command, char *line);
char *find_path(void);
/**void *_mycalloc(unsigned int num, unsigned int size);**/
/**void *malloc(unsigned int num, unsigned int size);*/

/*-----Aux functions-----*/
extern char **environ;


/* String Handlers */
void handle_signal(int sn);

/* Path & Search Handlers */
char *test_path(char **path, char *command);
void promptuser(void);


/* Built-ins Functions */
void free_buffers(char **buf);
/* Simple Shell Handlers */
int main(int argcnt, char **argvtr, char *envvtr[]);
void simple_exec(params *p);
void fork_execute(char *cmd, params *p);
char *index_path(char *path, char *command);

/*STRUCTURES*/

struct builtin
{
	char *env;
	char *exit;
} builtin;

struct info
{
	int final_exit;
	int ln_count;
} info;

struct flags
{
	bool interactive;
} flags;

#endif /* MAIN_H */
