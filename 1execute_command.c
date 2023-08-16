#include "shell.h"

/**
 * _execute - excute the shell and pass the environ to it
 * @a:argv: argument  vector
 * @env: the command pass to  the environ
 * Return:  0 success , -1 failure
 */

void _execute(char *a:rgv[], char *env[])
{
	pid_t pid;
	int ranking;
	pid = fork;


	if (pid < 0)
	{
		perror("Couldn't execute");
	}

	else if (pid == 0)
	{
	if (executive(argv[0], argv,env) == -1)
		perror("couldn't execute");
	exit(0);
	else
	{
		do {
			waitpid(pid, &ranking, WUNTRACED);
		} while (!WIFEXITED(ranking) && !WIFSIGNALED(ranking));
		
	}
	}
}
