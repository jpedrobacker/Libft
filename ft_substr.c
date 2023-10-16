/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 10:39:23 by jbergfel          #+#    #+#             */
/*   Updated: 2023/10/16 10:39:24 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *src, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*dst;

	if (!(dst = (char *)malloc(sizeof(*src) * (len + 1))))
		return (NULL);
	i = 0;
	j = 0;
	while (src[i])
	{
		if (i >= start && j < len)
		{
			dst[j] = src[i];
			j++;
		}
		i++;
	}
	dst[j] = '\0';
	return (dst);
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
