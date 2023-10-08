#include "libft.h"

char *ft_strrchr(const char *str, int c)
{
  int i;
  int j;
  char *stri;

  stri = (char *)str;
  i = 0;
  if (c == 0)
    return (stri + i);
  while (str[i] != '\0')
    {
      if (stri[i] == c)
        j = i;
      i++;
    }
  return (stri + j);
}

/*
int main(void)
{
  char *str = "sdhahsduha.joao";
  printf("%s", ft_strrchr(str, '.'));  
}
*/