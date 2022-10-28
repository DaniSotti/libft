#include "libft.h"
char    *ft_strchr(const char *s, int c)
{
    while (*s != '\0')
    {
        if (*s == c)
            return ((char *)s);
        s++;
    }
    return (0);
}

#include<stdio.h>
int main()
{
    char *str = "Danielle.desotti";
    char *res = ft_strchr(str, 'z');

    printf("%s", res);
    return (0);
}