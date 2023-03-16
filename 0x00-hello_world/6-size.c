#include<stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void){
	int i,c,li,lli,f;
	i = sizeof(int);
	c = sizeof(char);
	f = sizeof(float);
	li = sizeof(long int);
	lli = sizeof(long long int);
	printf("Size of a char: %d byte(s)\n",c);
	printf("Size of an int: %d byte(s)\n",i);
	printf("Size of a long int: %d byte(s)\n",li);
	printf("Size of a long long int: %d byte(s)\n",lli);
	return (0);
}
