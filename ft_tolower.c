#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c += 32;
	return (c);
}

/*
int main(void)
{
	char str[] = "ola";
	int i = 0;
	while (str[i] != '\0')
	{
		printf("%c", ft_tolower(str[i]));
		i++;
	}
	printf("\n");
}
*/
