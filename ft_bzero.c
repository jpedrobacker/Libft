#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	if (n != 0)
		ft_memset(str, '\0', n);
}

/*
int main(void)
{
	char str[50];
	strcpy(str, "olha essa string com isso aqui");
	ft_bzero(str, 4);
	ft_putstr_fd(str, 1);
}
*/
