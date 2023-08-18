#include "shell.h"

 /**
 * _exit - exit simple shell
 * @env: enviroment that is current
 */
void _exit(char *env[])
{
	int p;

	if (env)
	_exit(0);
}
 /**
 * _env - prints enviroment
 * @env: current enviroment
 */
void _env(char *env[])
{
	int p = 0;

	while (env[p])
	{
		_putstr(env[p]);
		_putstr("\n");
		p++;
	}
}

/**
 * check_for_builtins - command check for builtin
 * @argv: arguments vector
 * @env: enviroment that is a current one
 * Return: pointer function or NULL
 */
void (*check_for_builtins(char *argv[], char *env[]))(char *env[])
{
	builtin_t check[] = {
		{"exit", n_exit},
		{"env", _env},
		{NULL, NULL}
	};
	for (p = 0; check[p].f != NULL; p++)
	{
		if (_strcmp(argv[0], check[p].name) == 0)
			break;
	}
	if (check[p].f != NULL)
	{
		free_double((void **) argv, ec((void **) argv));
		check[p].f(env);
	}
	return (check[p].f);
}

