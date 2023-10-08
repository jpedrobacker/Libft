#include "libft.h"

char *ft_strdup(const char *src)
{
	int		j;
	char	*dst;

	j = 0;
	dst = malloc(ft_strlen(src) + 1);
	if (!dst)
		return (0);
	while (src[j])
	{
		dst[j] = src[j];
		j++;
	}
	dst[j] = '\0';
	return (dst);
}

/*
int main(void)
{
	char    *str;
	char    *alc;
	
	str = "copia essa string";
	alc = ft_strdup(str);
	printf("original: %s\ncopia: %s", str, alc);
}
*/