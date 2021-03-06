#include "header.h"
char    *ft_strmapi(const char *s, char (*f) (unsigned int, char))
{
    unsigned int    i;
    char            *str;

    i = 0;
    str = (char *)malloc(sizeof(char) * ft_strlen(s));
    if (str == NULL)
        return (NULL);
    while (s[i])
    {
        str[i] = f(i, s[i]);
        i++;
    }
    str[i] = '\0';
    return (str);
}