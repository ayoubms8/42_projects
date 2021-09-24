#include "header.h"

int ft_atoi(const char *str)
{
    int i = 0;
    int sign = 1;
    int acc = 0;
    while (str[i] <= 32)
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign = -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        acc = acc * 10 + (str[i] - '0');
        i++;
    }
    return(acc * sign);
}
/*
int main()
{
    printf("%d\n", ft_atoi("    +323 424"));
    printf("%d\n", atoi("    +323 424"));
}*/