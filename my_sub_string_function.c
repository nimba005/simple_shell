#include "shell.h"

/**
 * my_substr - searches on a word in a sentence
 * @sentence: first param to search for
 * @word: part to be searched
 * Return: pointer to address where to find the word
 */
char *my_substr(char *sentence, char *word)
{
int my_s;
for (my_s = 0; sentence[my_s] != '\0'; my_s++)
{
if (sentence[my_s] == word[0])
{
int my_w;
for (my_w = 0; word[my_w] != '\0'; my_w++)
{
if (sentence[my_s + my_w] != word[my_w])
{
break;
}
}
if (word[my_w] == '\0')
{
return (&sentence[my_s]);
}
}
}
return (NULL);
}
