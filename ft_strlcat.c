#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (size == 0)
		return (ft_strlen(src));
	else if (size < ft_strlen(dst))
		return (ft_strlen(src) + size);
	else
		while (dst[i] != '\0')
			i++;
		while (src[j] != '\0' && j < size)
			dst[i++] = src[j++];
		dst[i] = '\0';
		return (i);
}

/*
int main(void)
{
	char dst[100] = "junta essa string";
	char src[100] = " com essa outra string";

	ft_strlcat(dst, src, ft_strlen(src));
	printf("%s",dst);
}
*/
