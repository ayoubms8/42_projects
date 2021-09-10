#include "header.h"
int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char *str1;
    unsigned char *str2;
    size_t i;

    i = 0;
    str1 = (unsigned char *)s1;
    str2 = (unsigned char *)s2;
    while ((str1[i] || str2[i]) && i < n)
    {
        if (str1[i] != str2[i])
            return (str1[i] - str2[i]);
        i++;
    }
    return (0);
}
/*
int main()
{
    printf("%d\n", memcmp(40, 40, 4));
    printf("%d\n", ft_memcmp(40, 40, 4));
}
*/