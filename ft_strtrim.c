/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-sott <dde-sott@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 21:27:12 by dde-sott          #+#    #+#             */
/*   Updated: 2022/11/10 22:52:19 by dde-sott         ###   ########.fr       */
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
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*sub;

	sub = (char *)malloc(sizeof(*s) * (len + 1));
	if (!s || !sub)
		return (0);
	i = start;
	j = 0;
	while (i < ft_strlen(s) && j < len)
	{
		sub[j] = s[i];
		j++;
		i++;
	}
	sub[j] = '\0';
	return (sub);
}

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (0);
} */
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*newstr;

	newstr = 0;
	if (s1 && set)
	{
		i = 0;
		while (s1[i] != '\0' && ft_strchr(set, s1[i]))
			i++;
		j = ft_strlen(s1);
		while (ft_strchr(set, s1[j - 1]) && j > i)
			j--;
		newstr = (char *)malloc(sizeof(char) * (j - i + 1));
		if (!newstr)
			return (0);
		newstr = ft_substr(s1, i, (j - i));
	}
	return (newstr);
}

/*int main()
{
    char str[] = "bcdAvocadobcd";
    char set[] = "bcd";
    char *newstr;

    newstr = ft_strtrim(str, set);
    printf("%s", newstr);
    return (0);
}*/

/*s1: The string to be trimmed.
set: The reference set of characters to trim.
The trimmed string.
NULL if the allocation fails.
Allocates (with malloc(3)) and returns a copy of
’s1’ with the characters specified in ’set’ removed
from the beginning and the end of the string.*/