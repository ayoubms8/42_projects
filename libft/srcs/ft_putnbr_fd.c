#include "header.h"
void    ft_putnbr_fd(int n, int fd)
{
    long long int nb;
    nb = n;
    if (nb < 0)
        nb = -nb;
    if (nb < 10)
        ft_putchar_fd(nb + 48, fd);
    else
    {
        ft_putnbr_fd(nb / 10, fd);
        ft_putnbr_fd(nb % 10, fd);
    }
}