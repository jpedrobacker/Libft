/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 10:38:21 by jbergfel          #+#    #+#             */
/*   Updated: 2023/10/16 10:38:22 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*csrc;
	char	*cdst;
	size_t	i;

	i = 0;
	cdst = (char *)dst;
	csrc = (char *)src;
	while (csrc[i] != '\0' && i < n)
	{
		cdst[i] = csrc[i];
		i++;
	}
	return (cdst);
}

/*
int main (void)
{
	char *src = "copia essa string";
	char dst[40];

	ft_memcpy(dst, src, strlen(src) + 1);
	printf("%s", dst);
}
*/
