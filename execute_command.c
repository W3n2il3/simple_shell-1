#include "shell.h"

/**
 * execute_command - Execute a command using execive
 * @command: The command to execute
 *
 * Return: 0 on success, -1 on failure
 */
void execute_command(char **args)
{
	pid_t pid = fork();
	/*char *args[];*/

	if (pid < 0)
	{
		perror("fork failed");
		exit(EXIT_FAILURE);
	}
	else if (pid == 0)
	{
		/*Child process */
		if (execve(args[0], args, NULL) == -1)
		{
			perror("execve failed");
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		/*Parent process*/
		wait(NULL);
	}
	/*return (0);*/
}
