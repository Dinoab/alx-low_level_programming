#include <stdlib.h>
#include <stdlib.h>
/**
 * main - Prints the opcodes of itself.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int con, byte;

	if (argc != 2)
	{
		printf("Error\n");
		return(1);
	}
	bytes = atoi(argv[1]);
	if (byte < 0)
	{
		printf("Error\n");
		return(2);
	}
	for (con = 0; con < byte; con++)
	{
		if (byte != 0)
		printf("%02hhx ", ((char *)main)[con]);
	}
	return (0);
}
