#include "header.h"
void *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char *s1;
    unsigned char *s2;
    size_t i;

    i = 0;
    s1 = (unsigned char *)dest;
    s2 = (unsigned char *)src;
    while (i < n)
    {
        s1[i] = s2[i];
        i++;
    }
    return (dest);
}
/*
int main()
{
   char cdest[] = "pls stop";
   char cdest2[] = "pls stop";
   char *str;
   str = cdest + 4;
   char *str2;
   str2 = cdest2 + 4;
   memmove(str, cdest, 5);
   printf("Correct string is %s\n", str);
   ft_memmove(str2, cdest2, 5);
   printf("Copied string is %s\n", str2);
}
*/