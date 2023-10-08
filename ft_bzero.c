#include "libft.h"

void ft_bzero(void *str, size_t n)
{
    ft_memset(str, '0', n);
}

/*
int main(void)
{
  char str[] = "olha essa string com isso aqui";
  ft_bzero(str, 4);
  printf("%s", str);
}
*/