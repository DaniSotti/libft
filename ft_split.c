/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-sott <dde-sott@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 12:46:57 by dde-sott          #+#    #+#             */
/*   Updated: 2022/11/18 00:58:35 by dde-sott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int    ft_coutstrs(char const *s, char c)
{
    int    i;
    int    count;

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

int    word_len(char const *s, char c, int i)
{
    int j;

    j = 0;
    while (s[i] != '\0' && s[i] != c)
    {
        i++;
        j++;
    }
    return (j);
}

char    **ft_split(char const *s, char c)
{
    char    **strsplit;
    int        i;
    int        j;
    int        k;

    i = 0;
    j = 0;
    k = 0;
    strsplit = (char**)malloc((ft_coutstrs(s, c) + 1) * sizeof(char *));
    if (!strsplit)
        return (0);
    while(s[i] != '\0')
    {
        while (s[i] == c)
            i++;
        if (s[i])
        {
            strsplit[j] = (char *)malloc((word_len(s, c, i) + 1) * sizeof(char));
            if (!strsplit[j])
                return (0);
            //while (j < ft_coutstrs(s, c))
            //{
                while(s[i] && s[i] != c)
                {
                    strsplit[j][k] = s[i];
                    i++;
                    k++;
                }
                strsplit[j][k] = '\0';
                j++;
            //}
        }
    }
    strsplit[j] = NULL;
    return (strsplit);
}

int    main()
{
    char    **tab;
    int        i;
    char    c;

    c = ' ';

    tab = ft_split("To be", c);

    i = 0;
    while (i <= 10)
    {
        printf("%s", tab[i]);
        i++;
    }
    return (0);
}