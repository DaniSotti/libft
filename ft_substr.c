/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-sott <dde-sott@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 22:07:35 by dde-sott          #+#    #+#             */
/*   Updated: 2022/11/12 19:20:21 by dde-sott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	j;
	char	*sub;

	sub = malloc(sizeof(char)*(len + 1));
	if (!sub || !s)
		return (0);
	j = 0;
	while (start < ft_strlen(s) && j < len)
	{
		sub[j] = s[start];
		j++;
		start++;
	}
	sub[j] = '\0';
	return (sub);
}

/*int main()
{
    char str[] = "danielle de sotti";
    //char    start = 'de';

    printf("%s", ft_substr(str, 3, 8));
    return (0);
}*/