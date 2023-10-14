#include "libft.h"

char	*ft_substr(const char *src, unsigned int start, size_t len)
{
	int	i;
	int	l;
	char	*dst;
	char	*s;

	s = (char *)src;
	l = len - start;
	i = start;
	if (!(dst = (char *)malloc(sizeof(char) * (l + 1))))
		return (NULL);
	while (i < len && (*(s + i) != '\0'))
	{
		*dst = *(s + i);
		dst++;
		i++;
	}
	*dst = '\0';
	return (dst - l);
}

/*
int main(void)
{
	char src[] = "substr funcao implementacao";
	int m = 7;
	int n = 12;

	char *dest = ft_substr(src, m, n);
	printf("%s\n", dest);
	return (0);
}
*/
