#include "libft.h"
size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	a;
	size_t	b;

	if (size <= ft_strlen(dst))
		return (size + ft_strlen(src));
	a = ft_strlen(dst);
	b = 0;
	while (src[b] != '\0' && a + 1 < size)
	{
		dst[a] = src[b];
		a++;
		b++;
	}
	dst[a] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[b]));
}

//Nao enviar
#include<stdio.h>
int main()
{
	char src[] = "Danielle";
	char dst[] = "de Sotti";
	size_t res = ft_strlcat(src, dst, 8);

	printf("%s\n%ld", dst, res);
	return (0);
}