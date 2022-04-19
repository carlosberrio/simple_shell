# Simple Shell
![plot](https://photos.app.goo.gl/KHAvBSjdhHLNediPA)
Kenneth Lane Thompson, creator of The First Shell, (born February 4, 1943) is an American pioneer of computer science. Thompson worked at Bell Labs for most of his career where he designed and implemented the original Unix operating system.
## What is a **shell**?
It is a program that takes keyboard commands through the terminal and gives them to the operating system to execute.

## Project description:
This project is a simple version of the linux shell made for Holberton School.

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

## Compilation:
The shell will be compiled this way:
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh

## Testing:
The shell should work like this in interactive mode:
$ ./hsh
($) /bin/ls
hsh main.c shell.c
($)
($) exit
$

But also in non-interactive mode:
$ echo "/bin/ls" | ./hsh
hsh main.c shell.c test_ls_2
$
$ cat test_ls_2
/bin/ls
/bin/ls
$
$ cat test_ls_2 | ./hsh
hsh main.c shell.c test_ls_2
hsh main.c shell.c test_ls_2
$

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

## Authors
<img src = https://cdn-icons-png.flaticon.com/512/25/25231.png width = "30xp" align= 'center'/> [Alejandro Caballero](https://github.com/Caballero18) |[ Carlos Berrio](https://github.com/carlosberrio) | [José Petro](https://github.com/Giu13sse)

<img src = https://cdn-icons-png.flaticon.com/512/60/60580.png width = "30xp" align= 'center'/> [Alejandro Caballero](https://twitter.com/Alejand51178128) | [Carlos Berrio](https://twitter.com/CarlosBerro6) | [José Petro](https://twitter.com/Rex_Giusse)

Holberton School - Foundations - Low-level programming & Algorithm  Linux and Unix system programming.
April, 2022. Medellín, Colombia.
