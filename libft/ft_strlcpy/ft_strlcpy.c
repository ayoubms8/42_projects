unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	k;

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