#include "libft.h"
int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;
    i = 0;
    while ((i < n) && ((s1[i] != '\0') || (s2[i] != '\0')))
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
    return (0);
}

//Nao enviar
#include <stdio.h>
int main (void)
{
    char    str1[] = "Esdole";
    char    str2[] = "Escola";

    printf("%i", ft_strncmp(str1, str2, 3));
    return (0); 
}