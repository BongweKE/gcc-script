#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main - use execve to run another executable
 */
int main(int argc, char **argv)
{
	char *newargv[] = {NULL, NULL};
	extern char **environ; /* get everything in env as an array */
	int e;/* checker to see if we set a variable in the env okay*/
	char **newenviron;

	/* fprintf(stderr, "test: %s\n", newenviron[0]); */
	/* arg count check */
	if (argc != 3)
	{
		fprintf(stderr,
			"Usage: %s ./compiler.sh <c_file_2_compile>\n",
			argv[0]);
		exit(EXIT_FAILURE);
	}

	/* pass compiler script to execve using this var */
	newargv[0] = argv[1];

	/* set a var we'll need on a shell script and check outcome */
	/* we use the name given on argv[2] */ 
	e = setenv ("FILES_2_COMPILE", argv[2], 1);

	newenviron = environ;/* pass env into a new array*/
	if (e == -1)
	{
		perror("setenv");
		exit(EXIT_FAILURE);
	}

	execve(argv[1], newargv, newenviron);

	/* it should exit before this since */
	/* We know that execve only returns on error */
	perror("execve");
	exit(EXIT_FAILURE);
}
