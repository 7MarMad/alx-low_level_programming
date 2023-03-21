#include<stdio.h>


int _putchar(char c);
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	char array[] = "_putchar\n";
	for (i = 0; array[i] != '\0'; i++)
	{
		_putchar(array[i]);
	}
	return (0);
}
