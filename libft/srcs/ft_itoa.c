#include "header.h"
int	get_num_of_digits(int i)
{
	int	k;

	k = 0;
	while (i >= 10)
	{
		i /= 10;
		k++;
	}
	return (k);
}

void	fill_string(int i, int k, char *arr)
{
	while (k >= 0)
	{
		arr[k] = i % 10 + 48;
		i /= 10;
		k--;
	}
}

char	*ft_itoa(int nb)
{
	long int	i;
	char		*arr;
	int			k;
	int			c;

	i = nb;
	k = 0;
	if (i < 0)
	{
		i = -i;
		k++;
	}
	k += get_num_of_digits(i);
	arr = (char *)malloc(sizeof(char) * (k + 1));
	if (arr == (NULL))
		return (NULL);
	c = k + 1;
	fill_string(i, k, arr);
	if (nb < 0)
		arr[0] = '-';
	arr[c] = '\0';
	return (arr);
}
/*
#include<stdio.h>
int main()
{
	printf("%s\n", ft_itoa(-45131));
}
*/