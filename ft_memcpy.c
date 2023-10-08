#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
    char *csrc = (char *)src; 
    char *cdst = (char *)dst; 
    size_t i;
    
    i = 0;
    while (csrc[i] != '\0' && i < n)
    {
        cdst[i] = csrc[i];
        i++;
    }
}

/*
int main(void)
{
    char src[50] = "copia essa string";
    char dst[50];

    ft_memcpy(dst, src, strlen(src) + 1);
    printf("%s", dst);
}
*/