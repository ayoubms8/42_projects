#include "header.h"
#include <stdio.h>
int		words_num(const char *s, char c)
{
	int i = 0;
	int count = 0;
	while (s[i])
	{
		if (s[i] == c)
			count++;
		i++;
	}
	return(count + 1);
}

int	ch7alm_char_tal_next_space(const char *s, char c, int i)
{
	int count;

	count = 0;
	while (s[i] != c)
	{
		count++;
		i++;
	}
	return (count);
}

char	**ft_split(const char *s, char c)
{
	char	**arr;
	int		i;
	int		j;
	int		k;

	arr = (char **)malloc(sizeof(char *) * (words_num(s, c) + 1));
	if (arr == NULL)
		return(NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (c != s[i])
		{
			arr[j] = (char *)malloc(sizeof(char) * ch7alm_char_tal_next_space(s, c, i));
			if (arr[j] == NULL)
				return (NULL);
			k = 0;
			while (s[i] != c)
			{
				arr[j][k] = s[i];
				i++;
				k++;
			}
			arr[j][k] = '\0';
			j++;
		}
		i++;
	}
	arr[j] = NULL;
	return (arr);
}

int main()
{
	int i = 0;
	char **arr = ft_split("bruh u hate this", ' ');
	while (i < 5)
	{
		printf("%s\n", arr[i]);
		i++;
	}
}