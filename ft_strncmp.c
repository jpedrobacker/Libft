#include "libft.h"

int ft_strncmp(const char *str1, const char *str2, size_t n)
{
	int				res;
	size_t  i;

	i = 0;
	if (n != 0)
	{
		while (str1[i] == str2[i] && (str1[i] != '\0' && str2[i] != '\0') && i < n -1)
		{
			i++;
		}
	}
	else
	{
		return (0);
	}
	return (res = str1[i] - str2[i]);
}

/*
int main(void)
{
  printf("%d", ft_strncmp("ABCDDASD", "ABCDasda", 6));
}
*/