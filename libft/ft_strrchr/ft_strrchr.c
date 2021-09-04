#include <stdio.h>
#include <string.h>

char *ft_strrchr(const char *s, int c)
{
    int i = 0;
    int last_match = -1;
    char *str;
    str = (char *)s;
    while (s[i])
    {
        if (s[i] == c)
            last_match = i;
        i++;
    }
    if (c == '\0')
        last_match--;
    if (last_match == -1)
        return ((void *)0);
    str += last_match;
    return (str);
}
/*
int main()
{
    printf("%s\n", ft_strrchr("bruh pls stop fumo", 'o'));
    printf("%s\n", strrchr("bruh pls stop fumo", 'o'));
}
*/