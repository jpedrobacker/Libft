#include "libft.h"

int ft_atoi(const char *str)
{
	int	i;
	int	s;
	int	res;

	i = 0;
	s = 1;
	res = 0;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			s *= -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		res = (str[i] - 48) + (res * 10);
		i++;
	}
	return (res * s);
}

/*
int main(void)
{
  printf("%d", ft_atoi("  +--++-+42ii342"));
}
*/