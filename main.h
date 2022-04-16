#ifndef MAIN_H
#define MAIN_H

/* STD LIBRARIES */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <errno.h>
#include <stddef.h>
#include <unistd.h>
#include <signal.h>
#include <stdbool.h>

/* PROTOTYPES */

/*-----Aux functions-----*/

/*global environment variable */

/* String Handlers */
void handle_signal(int sn);

/* Path & Search Handlers */

/* Built-ins Functions */
void free_buffers(char **buf);
/* Simple Shell Handlers */

/*STRUCTURES*/
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
