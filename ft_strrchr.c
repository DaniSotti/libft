/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-sott <dde-sott@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 10:58:50 by dde-sott          #+#    #+#             */
/*   Updated: 2022/10/29 15:43:48 by dde-sott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*size_t ft_strlen(const char *s)
{
    size_t i;

    i = 0;
    while (s[i] != '\0')
        i++;
    return (i);
}*/

char	*ft_strrchr(const char *s, int c)
{
    int len;

    len = ft_strlen(s);
	while (len > 0)
	{
		if (s[len] == c)
			return ((char *)s + len);
		len--;
	}
	if (c == '\0')
		return ((char *)s);
	return (0);
}

#include <stdio.h>
//Nao enviar
int	main(void)
{
	char	*str = "Danielle.desotti";
	char	*res = ft_strrchr(str, '.');
    
    if (res == NULL)
        printf("Nao tem nada ai dentro");
    else
	    printf("%s", res);
	return (0);
}