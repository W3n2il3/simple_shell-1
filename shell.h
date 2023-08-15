#ifndef __SIMPLE_SHELL_H__
#define __SIMPLE_SHELL_H__
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

/*__FUNCTION_PROTOTYPES*/
int execute_command(char *command);
#endif /*SIMPLE_SHELL_H*/
