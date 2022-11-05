/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-sott <dde-sott@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 10:59:54 by dde-sott          #+#    #+#             */
/*   Updated: 2022/11/05 13:25:26 by dde-sott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t i;

    i = 0;
    char *char_dest = (char *) dest;
    char *char_src = (char *) src;
    while (i < n)
    {
        char_dest[i] = char_src[i];
        i++;
    }
    return (dest);
}

/*//não enviar
#include<stdio.h>
int main()
{
    char src[] = "copy this";
    char dest[100];

    ft_memcpy(dest, src, 11);
    printf("src: %s\n", src);
    printf("dest: %s\n", dest);
    return (0);
}*/