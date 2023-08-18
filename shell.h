#ifndef __SIMPLE_SHELL_H__
#define __SIMPLE_SHELL_H__
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

/*__FUNCTION_PROTOTYPES*/
void exeute_command(char **args);
void (*check_for_builtins(char *argv[], char *env[]))(char *env[]);
void _env(char *env[]);
void _exit(char *env[])
#endif /*SIMPLE_SHELL_H*/
