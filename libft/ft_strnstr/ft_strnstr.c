#include <stddef.h>
#include <string.h>
#include <stdio.h>

int ft_strlen(const char *str)
{
    int i = 0;
    while (str[i])
        i++;  
    return (i);
}

char *ft_strnstr(const char *haystack, const char *needle, size_t n)
{
    size_t i = 0;
    size_t j;
    size_t k;
    char *str = (char *)haystack;
    while (haystack[i])
    {
        k = i;
        j = 0;
        while(needle[j] == haystack[i] && j < n)
        {
            j++;
            i++;
        }
        if (j == ft_strlen(needle) || j == n)
        {
            str += k;
            return (str);
        }
        i++;
    }
    return ((void *)0);
}
/*
int main()
{
    printf("%s\n", strstr("bruh stop here pls", "here"));
    printf("%s\n", ft_strnstr("bruh stop here pls", "hegh", 2));
}
*/