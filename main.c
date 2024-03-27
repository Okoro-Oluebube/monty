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
}
