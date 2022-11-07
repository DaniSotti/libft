/*
CORRIGIR
#include "libft.h"
size_t ft_strlen(const char *s)
{
    size_t i;

    i = 0;
    while (s[i] != '\0')
        i++;
    return (i);
}
char    *ft_strtrim(char const *s1, char const *set)
{
    size_t  i;
    size_t  j;
    char    *newstr;

    i = 0;
    newstr = (char *)malloc(sizeof(char) * ft_strlen(s1) + 1);
    if (!newstr)
        return (0);
    while (s1[i] != '\0')
    {
        j = 0;
        if (s1[i] == set[j])
            i++;
        else
        {
            newstr[j] = s1[i];
            i++;
            j++;
        }
    }
    return (newstr);
}

int main()
{
    char str[] = "   Banana     ";
    char set[] = " ";
    char *newstr;

    newstr = ft_strtrim(str, set);
    printf("%s", newstr);
    return (0);
}

/*s1: The string to be trimmed.
set: The reference set of characters to trim.
The trimmed string.
NULL if the allocation fails.
Allocates (with malloc(3)) and returns a copy of
’s1’ with the characters specified in ’set’ removed
from the beginning and the end of the string.*/