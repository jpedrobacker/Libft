#include "libft.h"

char *ft_strchr(const char *str, int c)
{
  int i;
  char *stri;

  stri = (char *)str;
  i = 0;
  if (c == 0)
    return (stri + i);
  while (stri[i] != '\0')
    {
      if (stri[i] == c)
        return (stri + i);
      i++;
    }
  return (0);
}

/*
int main(void)
{
  char *str = "sdhahsduha.joao";
  printf("%s", ft_strchr(str, '.'));
}
*/
