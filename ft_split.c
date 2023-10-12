#include "libft.h"

size_t	get_words(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (*s != '\0')
	{
		if (*s == c)
			s++;
		else
		{
			i++;
			while (*s != '\0' && *s != c)
				s++;
		}
	}
	return (i);
}

char	**free_m(char **s, size_t idx)
{
	while (s[idx] != NULL && idx >= 0)
	{
		free(s[idx]);
		s[idx] = NULL;
		idx--;
	}
	free(s);
	s = NULL;
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	len;
	size_t	wc;
	char	**arr;

	if (!s || !(arr = (char **)malloc(sizeof(char *) * (get_words(s, c) + 1))))
		return (NULL);;
	wc = get_words(s, c);
	i = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			len = 0;
			while(*(s + len) && *(s + len) != c)
				len++;
			if (i < wc && !(arr[i] = ft_substr(s, 0, len)))
				return (free_m(arr, i));
			s += len;
		}
	}
	arr[i] = 0;
	return (arr);
}
