#include<stdlib.h>
size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (src[j] != '\0')
		j++;
	if (dstsize != 0)
	{
		while ((src[i] != '\0') && (i < (dstsize - 1)))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (j);
}
// Nao enviar
#include<stdio.h>
int main()
{
    char src[] = "Danielle";
    char dst[] = "Nossa";
    size_t n = 6;

    size_t b = ft_strlcpy(dst, src, n);
    printf("%zu\n%s\n",b, dst);
    return (0);
}