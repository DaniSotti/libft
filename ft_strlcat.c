#include "libft.h"
/*size_t ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}*/
size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	a;
	size_t	b;

	if (dstsize <= ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	a = ft_strlen(dst);
	b = 0;
	while (src[b] != '\0' && a + 1 < dstsize)
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
	size_t res = ft_strlcat(dst, src, 16);

	printf("%s\n%ld", dst, res);
	return (0);
}