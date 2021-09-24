#include "header.h"
char *ft_substr(const char *s, unsigned int start, size_t len)
{
    char	*str;
    size_t	i;

	i = 0;
    str = (char *)malloc(sizeof(char) * len);
	if (str == NULL)
		return (NULL);
    while (i < len && s[start + i])
    {
        str[i] = s[start + i];
		i++;
    }
	str[i] = '\0';
    return (str);
}
/*
#include <stdio.h>

int main()
{
	printf("%s\n", ft_substr("bruh this is so fumo", 2, 6));
}
*/