int ft_isprint(int car)
{
    if (car >= 32 && car <= 126)
        return(1);
    else
        return(0);
}

//Nao enviar
#include<stdio.h>
#include<ctype.h>
int main()
{
    char car = 31;

    if (ft_isprint(car))
        printf("Is printable");
    else
        printf("Is not printable");
    return(0);
}