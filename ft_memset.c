#include "libft.h"

void *ft_memset(char *str, int a, size_t n)
{
  size_t i;

  i = 0;
  while (i < n)
    {
      str[i] = a;
      i++;
    }
}

/*
int main(void)
{
  char str[] = "olha essa string com isso aqui";
  ft_memset(str, '&', 4);
  printf("%s", str);
}
*/