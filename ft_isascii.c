int ft_isascii(int car)
{
    if (car >= 0 && car <= 127)
        return (1);
    else
        return (0);
}

//Nao enviar
#include<stdio.h>
#include<ctype.h>
int main()
{
    char car = -127;

    if (ft_isascii(car))
        printf("Is a ASCII caracter\n");
    else
        printf("Is not a ASCII caracter\n");

    if (isascii(car))
        printf("Is a ASCII caracter\n");
    else
        printf("Is not a ASCII caracter\n");
    return (0);
}