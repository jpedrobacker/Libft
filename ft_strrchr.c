#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;
	char	*stri;

	i = 0;
	stri = (char *)str;
	if (c == 0)
		return (stri + i);
	while(str[i] != '\0')
	{
		if (stri[i] == c)
			return(stri + i);
		i++;
	}
	return (0);
}

/*
int main(void)
{
  char *str = "sdhahsduha.joao";
  printf("%s", ft_strrchr(str, '='));
}
*/
