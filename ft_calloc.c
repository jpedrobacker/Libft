#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	size_t	j;
	int	*i;

	if (nitems == 0 || size == 0)
	{
		nitems = 1;
		size = 1;
	}
	j = nitems * size;
	if (!(i = malloc(j)))
		return (NULL);
	else
		ft_bzero(i, j);
	return (i);
}

/*
int main(void)
{
	int i = 0;
	int n = 0;
	int *ptr = (int *)ft_calloc(n, sizeof(int));

	while (i < n)
	{
		ptr[i] = i + 1;
		i++;
	}
	i = 0;
	while (i < n)
	{
		printf("%d, ", ptr[i]);
	}
}
*/
