#include "libft.h"

size_t ft_strlen(const char *str)
{
	size_t len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

/*
int main(void)
{
  char str[] = "Ola";

  printf("%ld", ft_strlen(str));
}
*/
