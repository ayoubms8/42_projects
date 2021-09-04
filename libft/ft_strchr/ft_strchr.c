#include <stdio.h>
#include <string.h>

char    *ft_strchr(const char *s, int c)
{
    char *str = (char *)s;
    int i = 0;
    while (str[i])
    {
        if (str[i] == c)
            return (str + i);
        i++;
    }
    if (c == '\0')
        return (str + i);
    return ((void *)0);
}
/*
int main()
{
    printf("%s\n", strchr("bruh pls stop this shitto", '\0'));
    printf("%s\n", ft_strchr("bruh pls stop this shitto", '\0'));
}
*/