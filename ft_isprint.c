#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= ' ' && c <= '~')
		return (1);
	else
		return (0);
}

/*
int main(void)
{
	printf("%d", ft_isprint('q'));
}
*/
