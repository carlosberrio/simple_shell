#include "main.h"

/**
 * @print_error - 
 * @program_name: 
 * @input: 
 * @error_num:
 * Return: 
 */

void print_error(char *program_name, char *input, int error_num)
{
char *str;

if (error_num == 127)
{
write(STDOUT_FILENO, program_name, _strlen(program_name));
write(STDOUT_FILENO, ": 1: ", 5);
write(STDOUT_FILENO, input, _strlen(input));
write(STDOUT_FILENO, ": not found\n", 12);
}
if (error_num == 2)
{
str = "sh: 1: Syntax error: \"";
write(STDOUT_FILENO, str, _strlen(str));
write(STDOUT_FILENO, ";", 1);
str = "\" unexpected\n";
write(STDOUT_FILENO, str, _strlen(str));
}
if (error_num == 3)
{
write(STDOUT_FILENO, program_name, _strlen(program_name));
write(STDOUT_FILENO, ": 1: ", 5);
str = "internal error allocating memory\n";
write(STDOUT_FILENO, str, _strlen(str));
}
}