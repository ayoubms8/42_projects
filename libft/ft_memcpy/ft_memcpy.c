#include <stddef.h>
#include <stdio.h>
#include <string.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
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
   char csrc[] = "GeeksforGeeks";
   char cdest[100];
   char *str;
   str = ft_memcpy(cdest, csrc, strlen(csrc)+1);
   printf("Copied string is %s\n", cdest);
   printf("Copied string is %s", str);

   int isrc[] = {10, 20, 30, 40, 50};
   int n = sizeof(isrc)/sizeof(isrc[0]);
   int idest[n];
   int i;
   int *arr;
   arr = ft_memcpy(idest, isrc,  sizeof(isrc));
   printf("\nCopied array is ");
   for (i=0; i<n; i++)
   {
    printf("%d ", idest[i]);
    printf("%d ", arr[i]);
   }
   return 0;
}
*/