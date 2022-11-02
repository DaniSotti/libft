#include "libft.h"
void    *ft_memchr(const void *s, int c, size_t n)
{
    char *str_s;
    str_s = (char *) s;
    size_t i;
    
    i = 0;
    while (i < n)
    {
        if ((unsigned char) str_s[i] == (unsigned char)c)
            return ((char *)s + i);
        i++;
    }
    if (c == '\0')
        return ((char *)s);
    return (0);
}

#include <stdio.h>
int main()
{
    char str[] = "danidesotti@gmail.com";
    char *domain = ft_memchr(str, '@', 5);
    char *domainreal = memchr(str, '@', 5);
    printf("domain: %s\n", domainreal);
    printf("domain: %s\n", domain);
    return (0);
}
