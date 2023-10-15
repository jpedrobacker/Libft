#include "libft.h"

int ft_isalpha(int c)
{
  if (c >= 65 && c <= 90)
    return (1);
  else if (c >= 97 && c <= 122)
    return (1);
  else
    return (0);
}

/*
int main(void)
{
  char c;

  c = 'q';
  printf("%d", ft_isalpha(c));
}
*/
