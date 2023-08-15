#include "shell.h"

/**
 * main - Entry point for the simple shell program
 *
 * Return: Always 0.
 */
int main(void)
{
	char *line = NULL;
	size_t len = 0;
	size_t read;

	while (1)
	{
		printf("($) ");
		read = getline(&line, &len, stdin);
		if (read == (ssize_t)-1)
		{
			if (feof(stdin))
			{
				putchar('\n');
				break;
			}
			perror("getline");
			exit(EXIT_FAILURE);
		}
		/*Remove the new line character from the end of thr input*/
		if (line[read - 1] == '\n')
			line[read - 1] = '\0';
		/*Execute the command using execve*/
		if (execute_command(line) == -1)
		{
			perror("execute_command");
		}
	}
	free(line);
	return (0);
}
