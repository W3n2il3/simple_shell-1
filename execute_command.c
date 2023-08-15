#include "shell.h"

/**
 * execute_command - Execute a command using execive
 * @command: The command to execute
 *
 * Return: 0 on success, -1 on failure
 */
int execute_command(char *command)
{
	pid_t pid = fork();
	/*char *args[];*/

	if (pid == -1)
	{
		perror("fork");
		return (-1);
	}
	else if (pid == 0)
	{
		/*Child process */
		char *args[] = {command, NULL};
		if (execve(command, args, NULL) == -1)
		{
			perror("execve");
			return (-1);
		}
	}
	else
	{
		/*Parent process*/
		wait(NULL);
	}
	return (0);
}
