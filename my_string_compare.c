#include "shell.h"

/**
 * my_strcmp - compare two strings
 * @string1: first string to compare
 * @string2: second string to compare
 * Return: 0 on equality,
 *         a - value if @string1 < @string2,
 *         a + value if @string1 > @strning2
 */
int my_strcmp(const char *string1, const char *string2)
{
while (*string1 != '\0' && *string2 != '\0' && *string1 == *string2)
{
string1++;
string2++;
}
return ((int) (*string1) -(*string2));
}
