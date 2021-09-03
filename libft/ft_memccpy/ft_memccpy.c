#include <stddef.h>
#include <string.h>
#include <stdio.h>

void *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
    unsigned char *s1;
    unsigned char *s2;
    size_t i;

    i = 0;
    s1 = (unsigned char *)dest;
    s2 = (unsigned char *)src;
    while (i < n && s2[i - 1] != c)
    {
        *s1 = s2[i];
        s1++;
        i++;
    }
    if(i == n)
        return (NULL);
    return (s1);
}
/*
int main()
{
   char csrc[] = "GeeksforGeeks";
   char cdest[100];
   printf("returned string is %s\n", (char *)memccpy(cdest, csrc, 'k', strlen(csrc)+1));
   printf("Copied string is %s\n", cdest);

   int isrc[] = {10, 20, 30, 40, 50};
   int n = sizeof(isrc)/sizeof(isrc[0]);
   int idest[n];
   int i;
   int *arr;
   arr = memccpy(idest, isrc, 30, sizeof(isrc));
   printf("\nCopied array is ");
   for (i=0; i<n; i++)
    printf("%d ", idest[i]);
    printf("\n");
   for (i=0; i<n; i++)
    printf("%d ", arr[i]);
   printf("\n");
   return 0;
}
*/