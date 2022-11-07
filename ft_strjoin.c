#include "libft.h"
/*size_t ft_strlen(const char *s)
{
    size_t i;

    i = 0;
    while (s[i] != '\0')
        i++;
    return (i);
}*/
char    *ft_strjoin(char const *s1, char const *s2)
{
    int     i;
    int     j;
    char   *newstr;

    i = 0;
    j = 0;
    newstr = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1)); //tamanho das 2 strings mais 1 para o null

    if (!newstr)
        return (0);
    while (s1[i] != '\0')
    {
        newstr[i] = s1[i];
        i++;
    }
    while (s2[j] != '\0')
    {
        newstr[i + j] = s2[j];
        j++;
    }
    newstr[i + j] = '\0';
    return (newstr);
}

int main ()
{
    char    str1[] = "Danielle";
    char    str2[] = " de Sotti";
    char    *conc;

    conc = ft_strjoin(str1, str2);
    printf("%s", conc);
    return (0);
}