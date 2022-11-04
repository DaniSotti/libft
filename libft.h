/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-sott <dde-sott@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 16:34:28 by dde-sott          #+#    #+#             */
/*   Updated: 2022/11/03 23:45:51 by dde-sott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <stdio.h>

int ft_isalnum(int car);
int ft_isalpha(int c);
int ft_isascii(int car);
int ft_isdigit(int num);
int ft_isprint(int car);
void    *ft_memcpy(void *dest, const void *src, size_t n);
void    *ft_memset(void *str, int c, size_t n);
size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t  ft_strlen(const char *s);
size_t  ft_strlcat(char *dst, const char *src, size_t dstsize);
char    *ft_strrchr(const char *s, int c);
#endif