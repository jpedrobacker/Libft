#include "libft.h"

int ft_memcmp(const void *str1, const void *str2, size_t n)
{
  size_t i;
  char *istr1 = (char *)str1;
  char *istr2 = (char *)str2;

  i = 0;
  while (i < n)
  {
    if (istr1[i] < istr2[i] || istr1[i] > istr2[i])
      return (istr1[i] - istr2[i]);
    i++;
  }
  return (0);
}

/*
int main(void)
{
  char str1[] = "a";
  char str2[] = "a";
  
  printf("%d",ft_memcmp(str1, str2, 1));
}
*/