#include "libft.h"

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
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

// funcoes da split

int	*strcount(char const *s, char c)
{
	size_t	len;
	size_t	j;
	size_t	i;
	char	*count;

	len = ft_strlen(s); //para retornar o valor da string
	i = 0;
	count = 0;
	while (i < len)
	{
		while (i < len)
		{
			if (strchr(c, s[i]) == '\0')
				break;
			i++;
		}

		j = i;
		while (i < len)
		{
			if (strchr(c, s[i]) != '\0')
				break;
			i++;
		}
		if (i > j) 
			*count = *count + 1;
	}
	return (count);
}

int main()
{
	char	s[] = "To be, or not, to be.";
	char	c[] = " ";

	printf("%d", strcount(s, c));
	return(0);
}
/*char	**ft_split(char const *s, char c)
{
	size_t	len;
	size_t	j;
	int		*count;

	len = ft_strlen(s); //para retornar o valor da string
	i = 0;
	count = 0;
	while (i < len)
	{
		while (i < len)
		{
			if (strchr(c, s[i]) == '\0')
				break;
			i++;
		}

		j = i;
		while (i < len)
		{
			if (strchr(c, s[i]) != '\0')
				break;
			i++;
		}
		if (i > j) *count = *count + 1;
	}
	
	
	
	
	size_t	i;
	size_t	j;
	char	*splistr;

	i = 0;
	len = ft_strlen(s);
	while (i < len)
	{
		if (strchr(s[i], c) == '\0')
			break ;
		i++;
	}
	j = 0;
	while (i < len)
		if (ft_strchr(s[i], c) != '\0')
			break ;
		splistr[j] = s[i];
		
	}*/

//Usar a função substring ou strchr (encontra a primeira posicao onde tem o palavra)
//Strcpy?
/*s: The string to be split.
c: The delimiter character.
The array of new strings resulting from the split.
NULL if the allocation fails.
Allocates (with malloc(3)) and returns an array
of strings obtained by splitting ’s’ using the
character ’c’ as a delimiter. The array must end
with a NULL pointer. */