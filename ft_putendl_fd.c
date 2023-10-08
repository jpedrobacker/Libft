#include "libft.h"

void ft_putendl_fd(char *s, int fd)
{
  int i;

  i = 0;
  while (s[i] != '\0')
    ft_putchar_fd(s[i++], fd);
  ft_putchar_fd('\n', 1);
}

/*
int main(void)
{
  ft_putendl_fd("corta isso", 1);
  ft_putendl_fd("oque é isso", 1);
}
*/