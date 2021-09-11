#include "header.h"
size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	k;

	i = 0;
	while (src[i])
		i++;
	if (size == 0)
		return (i);
	k = 0;
	while (k < size - 1 && src[k])
	{
		dest[k] = src[k];
		k++;
	}
	dest[k] = '\0';
	return (i);
}