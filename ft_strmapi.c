#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char	*str;

	if (!s)
		return (NULL);
	i = 0;
	if (!(str = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1)))
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*
char	func(unsigned int i, char str)
{
	printf("%d, %c\n", i, str);
	return (str - 32);
}

int main(void)
{
	char *str = "vai.";
	printf("%s\n", str);
	char *result = ft_strmapi(str, func);
	printf("%s\n", result);
	return 0;
}
*/
