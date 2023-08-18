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
		command = strtok(input, "\n");
		i = 0;
		while (command != NULL)
		{
			args[i++]  = command;
			command = strtok(NULL, "\n");
		}
		args[i] = NULL;
		execute_command(args);
	}
	return (0);
}
