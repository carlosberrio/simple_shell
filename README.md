# Simple Shell
![link](https://i.imgur.com/6kSqXN8.jpg)
Kenneth Lane Thompson, creator of The First Shell, (born February 4, 1943) is an American pioneer of computer science. Thompson worked at Bell Labs for most of his career where he designed and implemented the original Unix operating system.
## What is a **shell**?
It is a program that takes keyboard commands through the terminal and gives them to the operating system to execute.

## Project description:
This project is a simple version of the linux shell made for Holberton School.
At the end of this project, students should be able to create a simple shell console.

## Requirements:
**General**
* Allowed editors: vi, vim, emacs
* All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
* All your files should end with a new line
* A README.md file, at the root of the folder of the project is mandatory
* Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
* Your shell should not have any memory leaks
No more than 5 functions per file
* All your header files should be include guarded
Use system calls only when you need to (why?)

## Files:
| Name | Description |
| ------------------------------ | -------------------------------------------- |
| AUTHORS | Contributors in this repository.|
| man_1_simple_shell | Manual of simple_shell. |
| shell.h | Main file program. |
| shell.c | infinite loop that read and execute the typed command. |
| tokenizer.c | Function that create tokens after the typed text. |
| testhpath.c | Function that tests path inside enviroment. |
| README.md | short explanation about project |
| prompt_user.c | Function that calls prompt and write $. |
| handle_signal.c | Function that manage CRT + d. |
| functions_str_add.c | own helper functions of strings. |
| functions_helper.c | More own helper functions. |
| free.bueffers.c | Function that release double pointers. |
| exit.c | Function that manage the exit command. |
| execution.c | Function that execute the entered command from user. |
| env.c | Function that prints the enviroment string. |
| count_of_words.c | Function that evaluates string. |
| checker.c | Function that evaluates if is built-in or not. |
| built.c | Function that execute the built-in functions. |

## Compilation:
The shell will be compiled this way:
* gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh

## Testing:
The shell should work like this in interactive mode:
* $ ./hsh
* ($) /bin/ls
* hsh main.c shell.c
* ($)
* ($) exit
* $

But also in non-interactive mode:
* $ echo "/bin/ls" | ./hsh
* hsh main.c shell.c test_ls_2
* $
* $ cat test_ls_2
* /bin/ls
* /bin/ls
* $
* $ cat test_ls_2 | ./hsh
* hsh main.c shell.c test_ls_2
* hsh main.c shell.c test_ls_2
* $

## Builtins
 - ls
 - pwd
 - env
 - exit
 - ctrl + d

## How to Install
1. Clone this repository: git clone "https://github.com/carlosberrio/simple_shell.git"
2. Go to directories in the repository: cd simple_shell
3. Compiler with command: gcc -Wall -Werror -Wextra -pedantic *.c -o hsh
4. Run the shell in interactive mode: ./hsh
5. Or run the shell in non-interactive mode: example echo "ls" | ./hsh
6. You can use valgrind command: "valgrind --leak-check=full --show-leak-kinds=all ./hsh"

## List of allowed functions and system calls:
* access (man 2 access)
* chdir (man 2 chdir)
* close (man 2 close)
* closedir (man 3 closedir)
* execve (man 2 execve)
* exit (man 3 exit)
* _exit (man 2 _exit)
* fflush (man 3 fflush)
* fork (man 2 fork)
* free (man 3 free)
* getcwd (man 3 getcwd)
* getline (man 3 getline)
* getpid (man 2 getpid)
* isatty (man 3 isatty)
* kill (man 2 kill)
* malloc (man 3 malloc)
* open (man 2 open)
* opendir (man 3 opendir)
* perror (man 3 perror)
* read (man 2 read)
* readdir (man 3 readdir)
* signal (man 2 signal)
* stat (__xstat) (man 2 stat)
* lstat (__lxstat) (man 2 lstat)
* fstat (__fxstat) (man 2 fstat)
* strtok (man 3 strtok)
* wait (man 2 wait)
* waitpid (man 2 waitpid)
* wait3 (man 2 wait3)
* wait4 (man 2 wait4)
* write (man 2 write)

## FLOWCHART
![link](https://i.imgur.com/0yflwJU.jpg)

## BLOG - What happens when you type `ls -l *.c` in the shell
[BLOG](https://medium.com/@4634/9af1e0f08220)

## Authors
<img src = https://cdn-icons-png.flaticon.com/512/25/25231.png width = "30xp" align= 'center'/> [ Carlos Berrio](https://github.com/carlosberrio) | [Jos?? Petro](https://github.com/Giu13sse)

<img src = https://cdn-icons-png.flaticon.com/512/60/60580.png width = "30xp" align= 'center'/> [Carlos Berrio](https://twitter.com/CarlosBerro6) | [Jos?? Petro](https://twitter.com/Rex_Giusse)

Holberton School - Foundations - Low-level programming & Algorithm  Linux and Unix system programming.
April, 2022. Medell??n, Colombia.
