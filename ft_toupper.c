#include "libft.h"
int ft_toupper(int c)
{
    if (c >= 'a' && c <= 'z')
        c = c - 32;
    return (c);
}

//Não enviar

#include <stdio.h>
int main()
{
    char name[] = "PizzaAAAAaAaAaA";
    int i;

    i = 0;
    while (name[i] != '\0')
    {
        name[i] = ft_toupper(name[i]);
        i++;
    }
    printf("%s", name);
    return(0);
}