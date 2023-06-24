#include "main.h"
/**
 * is_palindrome_helper - A helper functionl
 * @s: The input string to check
 * @start: The starting index of the current substring being checked
 * @end: The ending index of the current substring being checked
 *
 * Return: 1 if the substring is a palindrome, 0 otherwise
 */
int is_palindrome_helper(char *s, int start, int end)
{
	if (start > end)
	{
		return (1);
	}
	if (s[start] != s[end])
	{
		return (0);

	}

	return (is_palindrome_helper(s,  start + 1, end - 1));

}
/**
 * is_palindrome - A function to check if a string is a palindrome
 * @s: The input string to check
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = 0;
	char *p = s;

	while (*p != '\0')
	{
		len++;
		p++;
	}
	return (is_palindrome_helper(s, 0, len));

}
