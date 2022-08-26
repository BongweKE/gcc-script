#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the line the user types in using
 * getline function
 *
 * Return: SUCCESS or FAILURE
 */
int main (void)
{
	char *line = NULL;
	size_t len = 0;
	ssize_t nread;

	printf("$ ");
	while ((nread = getline(&line, &len, stdin)) != -1)
	{
		fwrite(line, nread, 1, stdout);
		printf("$ ");
	}
	printf("\n");

	free(line);
	exit(EXIT_SUCCESS);
}
