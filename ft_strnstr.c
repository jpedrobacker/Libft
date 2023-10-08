#include "libft.h"

char *ft_strnstr(const char *str, const char *to_find, size_t n)
{
  size_t	i;
  size_t	j;

	i = 0;
	if (to_find[i] == '\0')
		return ((char *)str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] != '\0' && str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return ((char *)str + i);
			else
				j++;
		}
		i++;
	}
	return (0);
}

/*
int main(void)
{
  char str[] = "Pegue essa string daqui";
  char to_find[] = "essa";
  printf("%s\n", ft_strnstr(str, to_find, 40));
}
*/