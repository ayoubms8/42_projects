#include "header.h"

int is_in_set(char c, const char *set)
{
    size_t  i;

    i = 0;
    while (set[i])
    {
        if (set[i] == c)
            return (1);
        i++;
    }
    return (0);
}

char *ft_strtrim(const char *s1, const char *set)
{
    size_t  i;
    size_t  j;
    size_t  k;
    char    *str;

    i = 0;
    j = ft_strlen(s1) - 1;
    k = 0;
    str = (char *)malloc(sizeof(char) * (j + 1));
    while (is_in_set(s1[i], set))
        i++;
    while (is_in_set(s1[j], set))
        j--;
    while (i <= j)
        str[k++] = s1[i++];
    str[k] = '\0';
    return (str);
}
/*
#include <stdio.h>
int main()
{
    printf("%s\n", ft_strtrim("bruh i hate sbrasbr", "bruh"));
}
*/