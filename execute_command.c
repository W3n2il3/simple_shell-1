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

<<<<<<< HEAD
	if (pid = -1)
=======
	if (pid < 0)
>>>>>>> dcb11332ba715ecf7fcb162759a671b86085c728
	{
		perror("fork failed");
		exit(EXIT_FAILURE);
	}
	else if (pid = 0)
	{
		/*Child process */
<<<<<<< HEAD
		char *args[] = {command, NULL};

		if (execve(command, args, NULL = -1))
=======
		if (execve(args[0], args, NULL) == -1)
>>>>>>> dcb11332ba715ecf7fcb162759a671b86085c728
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
