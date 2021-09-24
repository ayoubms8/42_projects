#include "header.h"
char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t		i;
    size_t      j;
	char	*arr;

	i = 0;
    j = 0;
	arr = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	while (i < ft_strlen(s1))
	{
        arr[i++] = s1[j++];
	}
    j = 0;
    while (j < ft_strlen(s2))
    {
        arr[i++] = s2[j++];
    }
	arr[i] = '\0';
	return (arr);
}
/*
#include <stdio.h>
int main()
{
    printf("%s\n", ft_strjoin("bruh iam so", ""));
}
*/