int ft_isdigit(int num)
{
    if (num >= '0' && num <= '9')
        return(1);
    else
        return(0);
}


//Nao enviar
#include <stdio.h>
#include <ctype.h>
int main()
{
    char c = '0';
    if (ft_isdigit(c))
        printf("Is a digit\n");
    else
        printf("Is not a digit\n");
     if (isdigit(c))
        printf("Is a digit\n");
    else
        printf("Is not a digit\n");
    return(0);
}