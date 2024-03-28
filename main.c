#include "monty.h"
/**
 * main --Main function.
 * @argc: No of fxn arg.
 * @argv: Fxn arg.
 * Return: Void.
 */

int main(int argc, char *argv[])
{
	char buff[1000];
	FILE *file;

	if (argc != 2)
	{
		printf("USAGE: monty file\n");
		return (EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	if (file == NULL)
	{
		printf("Error: Can't open file %s\n", argv[1]);
		return (EXIT_FAILURE);
	}
	else
	{
		while ((fgets(buff, sizeof(buff), file)) != NULL)
		{
			if (strcmp(buff, "push") == 0)
			{
				printf("%s\n", buff);
			}
			else
				printf("ERROR\n");
		}
	}
	return (0);
}
