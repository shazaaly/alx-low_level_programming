#include <unistd.h>
/**
 * main - This is entry point
 * Return: Always 0
 */
int main(void)
{
	char *mystr = ("and that piece of art is useful\" - Dora Korpar, 2015-10-19");
	write(STDIN_FILENO, mystr,50));
        return (1);
}

