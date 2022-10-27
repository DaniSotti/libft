#include "libft.h"
size_t ft_strlen(const char *s)
{
    size_t i;

    i = 0;
    while (s[i] != '\0')
        i++;
    return (i);
}

#include<stdio.h>
int main()
{
    char s[] = "Danielle";
    int len = ft_strlen(s);
    printf("%d", len);
    return (0);
}