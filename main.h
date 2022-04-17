#ifndef MAIN_H
#define MAIN_H

/* STD LIBRARIES */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <errno.h>
#include <stddef.h>
#include <unistd.h>
#include <signal.h>
#include <stdbool.h>
#include <dirent.h>



/**
 * fork_execute - create child process and execute cmd
 * @cmd: command or file to execute
 * @p: struct with arguments
 * struct params - object with all variables
 * @argv: arguments from user
 * @loop: num of times prompt has been showed
 * @found: used to find files with stat()
 * @buff: used with getline()
 * @cmd: command = path + argv[0]
 * @name: name of executable used in errors
 * @exit_value: int used for return
 */

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
int _strcmp(char *s1, char *s2);
char *_strdup(char *str);
int _strlen(char *string);
char handlesignal(int l);
int count_of_words(char *str);
int checker(char **cmd, char *buf);
void print_env(void);
void free_buffers(char **buf);
void exit_cmd(char **command, char *line);
void execution(char *cmds, char **cmdv);
int _putchar(char c);
char *_itoa(int i, char *strout, int base);
void print_error(char *program_name, char *input, int error_num);

/*-----Aux functions-----*/


/* String Handlers */
void handle_signal(int sn);

/* Path & Search Handlers */
char *testpath(char **token);
char prompt_user(void);


/* Built-ins Functions */
void free_buffers(char **buf);
/* Simple Shell Handlers */
int main(int argcnt, char **argvtr, char *envvtr[]);
void simple_exec(params *p);
void fork_execute(char *cmd, params *p);

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
