/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-sott <dde-sott@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 12:46:57 by dde-sott          #+#    #+#             */
/*   Updated: 2022/11/21 00:42:01 by dde-sott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*static void	ft_freeup(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		free(s);
		i++;
	}
	free(s);
}*/

static int	ft_coutstrs(char const *s, char c)
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

static int	word_len(char const *s, int i, char c)
{
	int	j;

	j = 0;
	while (s[i] != '\0' && s[i] != c)
	{
		i++;
		j++;
	}
	return (j);
}

static char	*ft_substrncpy(const char	*s, int pos, int len)
{
	char	*str;
	int		i;

	str = (char *)malloc(sizeof(char) * len + 1);
	if (!str)
		return (0);
	i = 0;
	while (i < len)
	{
		str[i] = s[pos];
		i++;
		pos++;
	}
	str[i] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**strsplit;
	int		i;
	int		j;
	int		countstr;

	i = 0;
	j = 0;
	countstr = ft_coutstrs(s, c);
	strsplit = (char **)malloc(sizeof(char *) * (countstr + 1));
	if (!strsplit)
		return (0);
	while (j < countstr)
	{
		if (s[i] == c)
		{
			while (s[i] == c)
				i++;
		}
		strsplit[j] = ft_substrncpy(s, i, word_len(s, i, c));
		while (s[i] != c)
			i++;
		j++;
		/*if (strsplit[j] == NULL)
			ft_freeup(strsplit[j]);*/
	}
	strsplit[j] = NULL;
	return (strsplit);
}

/*int    main()
{
	char    **tab;
	int        i;
	//char    c;

	//c = ' ';

	tab = ft_split("hello!zzzzzzzzdani", 'z');

	i = 0;
	while (tab[i])
	{
		printf("%s", tab[i]);
		i++;
	}
	return (0);
}*/