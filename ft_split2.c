/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-sott <dde-sott@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 12:46:57 by dde-sott          #+#    #+#             */
/*   Updated: 2022/11/15 23:29:50 by dde-sott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "libft.h"

int	ft_coutstrs(char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] != c && s[i] != '\0')
				i++;
			if (s[i] == '\0')
				return (count);
		}
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int		start;
	int		pos;
	int		i;
	int		idx;
	int		len;
	int		countstrs;
	char	**strsplit;

	countstrs = ft_coutstrs(s, c);
	strsplit = (char **)malloc(countstrs + 1) * (sizeof(char *));
	i = 0;
	idx = 0;
	while (s)
	{
		if (s[i] == c)
			i++;
		else
		{
			pos = i;
			idx++;
			while (s[i] != c)
				len++;
			if (idx < countstrs)
				strsplit = ft_substr(s, pos, len);
				return(strsplit);
		}
	}
}

int	main()
{
	char str[] = "to be, or not to be, that is the question.";
	char c = ' ';

	printf("%d", ft_coutstrs(str, c));
	return (0);
} */