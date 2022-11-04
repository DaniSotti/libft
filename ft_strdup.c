#include "libft.h"
size_t ft_strlen(const char *s)
{
    size_t i;

    i = 0;
    while (s[i] != '\0')
        i++;
    return (i);
}
char    *ft_strdup(const char *s)
{
    char    *newstr;
    size_t  i;

    newstr = (char *) malloc(ft_strlen(s + 1) * sizeof(char));
    if (!newstr)
        return (0);

    i = 0;
    while (s[i] != '\0')
    {
        newstr[i] = s[i];
        i++; 
    }
    newstr[i] = '\0';
    return (newstr);
}

/*int main(int argc, char **argv)
{
    char *mine;
    char *theirs;

    if (argc == 2)
    {
        mine = ft_strdup(argv[1]);
        theirs = strdup(argv[1]);
        printf(":%s:\n:%s:\n", mine, theirs);
    }
    return (0);
}*/