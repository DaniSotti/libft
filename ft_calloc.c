#include "libft.h"
void    *ft_calloc(size_t count, size_t size)
{
    size_t  totalcount;
    void    *memall;

    totalcount = count * size;
    memall = malloc(totalcount);
    if (memall == NULL)
        return (0);
    else
        ft_memset(memall, 0, totalcount);
    return (memall);
}

int main()
{
    int *p;
    p = (int *) calloc(5, sizeof(int));

    printf("%i", *p);

    return (0);
}