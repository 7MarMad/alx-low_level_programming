#include<stdio.h>
#include<string.h>

/**
 * _strstr - finding a string inside another string
 * @haystack: the big srting
 * @needle: the string searched for
 *
 * Return: pointer
 */

char *_strstr(char *haystack, char *needle)
{
	char *res;

	res = strstr(haystack, needle);
	return (res);
}
