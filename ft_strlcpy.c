#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (src[i] != '\0')
	{
		if (size && (i < (size - 1)))
		{
			dst[i] = src[i];
			j++;
		}
		i++;
	}
	dst[j] = '\0';
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
