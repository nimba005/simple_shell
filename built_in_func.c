#include "shell.h"

/**
 * my_env - prints the environmental value
 * Return: 0 on success
 */
int my_env(void);

/**
 * check_build_in_func - checking the string built in function
 * @final_string: input from user
 * @envp: array for environmental variables
 * Return: integer value
 */
int check_build_in_func(char *final_string, char *envp[])
{
char *array_builtin[] = {"cd", "exit", "env"};
int num_builtins = sizeof(array_builtin) / sizeof(array_builtin[0]);
int s;
(void)envp;
for (s = 0; s < num_builtins; s++)
{
if (my_strcmp(array_builtin[s], final_string) == 0)
{
switch (s + 1)
{
case 1:
chdir(final_string);
return (1);
case 2:
exit(EXIT_SUCCESS);
case 3:
my_env();
return (1);
default:
return (0);
}
}
}
return (0);
}
