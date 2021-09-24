#include "header.h"
char *ft_strdup(const char *s)
{
    char	*str;
    int		i;

    str = (char *)malloc((sizeof(char) * ft_strlen(s)) + 1);
	i = 0;
    while (s[i])
    {
        str[i] = s[i];
		i++;
    }
    str[i] = '\0';
    return (str);
}
/*
int main ()
{
	printf("%s\n", ft_strdup("bruh copy this"));
}
*/