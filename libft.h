#ifndef LIBFT_H
#define LIBFT_H
#include <stdlib.h>
#include <unistd.h>
int ft_isalnum(int car);
int ft_isalpha(int c);
int ft_isascii(int car);
int ft_isdigit(int num);
int ft_isprint(int car);
void *ft_memcpy(void *dest, const void *src, size_t n);
void *ft_memset(void *str, int c, size_t n);
size_t ft_strlcpy(char *dst, const char *src, size_t dstsize);
int ft_strlen(const char *s);
#endif