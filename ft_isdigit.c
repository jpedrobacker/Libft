#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

/*
int main(void)
{
	printf("%d", ft_isdigit('q'));
}
*/
