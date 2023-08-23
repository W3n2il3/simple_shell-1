#include "shell.h"

/**
 * main - main shell code
 * @argc: number of passed arguments
 * @argv: program arguments to be parsed
 *
 * applies the functions in utils and helpers
 * implements EOF
 * Prints error on Failure
 * Return: 0
 */

int main(int argc __attribute__((unused)), char **argv)
{
	char **current_command = NULL;
	int p, type_command = 0;
	size_t n = 0;

	signal(SIGINT, ctrl_c_handler);
	shell_name = argv[0];
	while (1)
	{
		non_interactive();
		print(" ($) ", STDOUT_FILENO);
		if (getline(&line, &n, stdin) == -1)
		{
			free(line);
			exit(status);
		}
			remove_newline(line);
			remove_comment(line);
			commands = tokenizer(line, ";");

		for (p = 0; commands[p] != NULL; p++)
		{
			current_command = tokenizer(commands[p], " ");
			if (current_command[0] == NULL)
			{
				free(current_command);
				break;
			}
			type_command = parse_command(current_command[0]);

			/* initializer -   */
			initializer(current_command, type_command);
			free(current_command);
		}
		free(commands);
	}
	free(line);

	return (status);
}

