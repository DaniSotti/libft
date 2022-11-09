#include "libft.h"
void ft_putendl_fd(char *s, int fd)
{
    int i;

    i = 0;
    while (s[i] != '\0')
    {
        write(fd, &s[i], 1);
        i++;
    }
    write(fd, "\n", 1);
}

/*Codigo nao adaptado a funcao real
int main()
{
    char s[] = "Dani";

    ft_putendl_fd(s);
    return (0);
}*/