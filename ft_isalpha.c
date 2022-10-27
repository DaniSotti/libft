int ft_isalpha(int c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return(1);
    return(0);
}

//Não enviar
#include<ctype.h>
#include<stdio.h>
int main()
{
    char c = 'A';
    if (isalpha(c))
        printf("É uma letra\n");
    else
        printf("Não é uma letra\n");
    if (ft_isalpha(c))
        printf("É uma letra");
    else
        printf("Não é uma letra");
    return (0);
}