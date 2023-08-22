#include "shell.h"

/**
 *main-handle arguments
 *@argc: the number of arguments
 *@argv: array of strength
 *Return: 0
 */

int main(int argc, char *argv[])
{
	int z;

	for (z = 0; z < argc; z++)
	printf("argv[%d]=%s\n", z, argv[z]);
	return (0);
}
