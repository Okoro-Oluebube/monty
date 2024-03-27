#include "monty.h"
/**
 * main --Main function.
 * @argc: No of fxn arg.
 * @argv: Fxn arg.
 * Return: Void.
 */

void main(int argc, char *argv)
{
	if (argc != 2)
	{
		printf("USAGE: monty file\n");
		return (EXIT_FAILURE);
	}
