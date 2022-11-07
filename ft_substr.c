#include "libft.h"
char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t  i;
    size_t  j;
    char    *sub;

    sub = (char *) malloc(sizeof(*s) * (len + 1));
    if (!sub)
        return (0);
    i = 0;
    j = 0;
    while (s[i] != '\0')
    {
        if (i >= start && j < len)
        {
            sub[j] = s[i];
            j++;
        }
        i++;
    }
    sub[j] = '\0';
    return (sub);
}

int main()
{
    char str[] = "danielle de sotti";
    //char    start = 'de';

    printf("%s", ft_substr(str, 3, 8));
    return (0);
}