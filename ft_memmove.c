#include "libft.h"

void *ft_memmove(void *str1, const void *str2, size_t n)
{
  char *dstr1 = (char *)str1; //dest string
  char *dstr2 = (char *)str2; //src string
  size_t i;

  i = 0;
  while (dstr2[i] != '\0' && i < n)
    {
      dstr1[i] = dstr2[i];
      i++;
    }
}

/*
int main(void)
{
  char dest[] = "ola";
  const char src[]  = "como esta";
  
  printf("Before memmove dest = %s, src = %s\n", dest, src);
  ft_memmove(dest, src, 4);
  printf("After memmove dest = %s, src = %s\n", dest, src);
}
*/