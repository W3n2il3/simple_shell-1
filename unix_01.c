#include "shell.h"

/**
 * main - Entry point for the simple shell program
 *
 * Return: Always 0.
 */
int main(void)
{
	char *command;
	char *args[MAX_ARGS];
	char input[MAX_COMMAND_LENGTH];
	int i;

	while (1)
	{
		printf("($) ");
		fflush(stdout);
		if (fgets(input, sizeof(input), stdin) == NULL)
		{
			break;
		}
<<<<<<< HEAD
		/*Remove the new line character from the end of the input*/
		if (line[read - 1] == '\n')
			line[read - 1] = '\0';
		/*Execute the command using execve*/
		if (execute_command(line) == -1)
=======
		command = strtok(input, "\n");
		i = 0;
		while (command != NULL)
>>>>>>> dcb11332ba715ecf7fcb162759a671b86085c728
		{
			args[i++]  = command;
			command = strtok(NULL, "\n");
		}
		args[i] = NULL;
		execute_command(args);
	}
	return (0);
}
