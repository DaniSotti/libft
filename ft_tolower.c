#include "libft.h"
int ft_tolower(int c)
{
    if (c >= 'A' && c <= 'Z')
        c = c + 32;
    return (c);
}

//Nao enviar
#include <stdio.h>
int main()
{
    char str[] = "PIZZA123";
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        str[i] = ft_tolower(str[i]);
        i++;
    }
    printf("%s", str);
    return(0);
}