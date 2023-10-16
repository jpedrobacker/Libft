/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 10:39:01 by jbergfel          #+#    #+#             */
/*   Updated: 2023/10/16 19:37:53 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	h;

	i = ft_strlen(src);
	j = 0;
	while (j < size && dst[j])
		j++;
	h = j;
	while (src[j - h] && (j + 1) < size)
	{
		dst[j] = src[j - h];
		j++;
	}
	if (h < size)
		dst[j] = '\0';
	return (h + i);
}


int main(void)
{
	char dst[100] = "junta essa string";
	char src[100] = " com essa outra string";

	ft_strlcat(dst, src, ft_strlen(src));
	printf("%s",dst);
}

