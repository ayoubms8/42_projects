#include "header.h"
void *ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*arr;
	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);
	ft_bzero(arr, nmemb * size);
	return(arr);
}
