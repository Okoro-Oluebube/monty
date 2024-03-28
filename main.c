#include "monty.h"
/**
 * main --Main function.
 * @argc: No of fxn arg.
 * @argv: Fxn arg.
 * Return: Void.
 */

void main(int argc, char *argv)
{
	FILE *file;
	if (argc != 2)
	{
		printf("USAGE: monty file\n");
		return (EXIT_FAILURE);
	}
	file = fopen(argv[1] "r");
	if (file == NULL)
	{
		printf("Error: Can't open file %s\n", argv[1]);
		return (EXIT_FAILURE);
	}
	else
	{
		while (file != EOF)
		{
			fgets(buff, buff_size, file);
			strtok,getline;
		}
	}
}
