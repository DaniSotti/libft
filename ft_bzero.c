/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-sott <dde-sott@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 17:41:20 by dde-sott          #+#    #+#             */
/*   Updated: 2022/11/02 19:16:37 by dde-sott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void *ft_memset(void *b, int c, size_t len)
{
    char    *d;

    d = (char *)b;
    while (len > 0)
    {
        d[len - 1] = c;
        len--;
    }
    return (b);
} */

void    ft_bzero(void *s, size_t n)
{
    ft_memset(s, '\0', n);
}

#include <stdlib.h>
#include <string.h>

int main( void )
{
    char buffer[80];
    
    bzero( buffer, 80 );
    return EXIT_SUCCESS;
}