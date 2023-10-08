#include "libft.h"

size_t  ft_strlcpy(char *dest, const char *src, size_t size)
{
  size_t i = 0;
  size_t j = 0;
  
  while (src[i] != '\0')
  {
    if (size && (i < (size - 1)))
    {
      dest[i] = src[i];
      j++;
    }
    i++;
  }
  dest[j] = '\0';
  return (i);
}

/*
int main(void)
{
  char src[] = "Ola";
  char dest[100];

  printf("%d\n",ft_strlcpy(dest, src, 4));
  printf("%s", dest);
}
*/