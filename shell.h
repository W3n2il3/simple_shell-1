#ifndef __SIMPLE_SHELL_H__
#define __SIMPLE_SHELL_H__
#define MAX_COMMAND_LENGTH 1024
#define MAX_ARGS 64
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>

/*__FUNCTION_PROTOTYPES*/
void execute_command(char **args);
char *read_command(void);
int main(int argc, char *argv[]);
void n_exit(char *env[]);
void (*check_for_builtins(char *argv[], char *env[]))(char *env[]);
void _env(char *env[]);
#endif /*SIMPLE_SHELL_H*/
