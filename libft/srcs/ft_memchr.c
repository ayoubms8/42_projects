#include "header.h"
void *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *str;

    str = (unsigned char *)s;
    while (n--)
    {
        if (*str == c)
            return(str);
        str++;
    }
    return ((void *)0);
}