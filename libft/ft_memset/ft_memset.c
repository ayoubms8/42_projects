#include <stddef.h>
#include <stdio.h>
void    *ft_memset(void *s, int c, size_t n)
{
	size_t i;
	unsigned char *p;

	i = 0;
	p = (unsigned char *)s;
	while (i < n)
	{
		p[i] = c;
		i++;
	}
	return (s);
}
/*
int main()
{
	char str[] = "bruuuh";
    char *str2 = "stop this";
    str2 = ft_memset(str, '1', 3*sizeof(char));
    printf("%s\n", str);
	printf("%s\n", str2);
}
*/