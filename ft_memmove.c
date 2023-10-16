/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 10:38:24 by jbergfel          #+#    #+#             */
/*   Updated: 2023/10/16 19:23:25 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dest;
	unsigned char	*dsrc;

	if (dst < src)
		return (ft_memcpy(dst, src, len));
	dest = (unsigned char *)dst;
	dsrc = (unsigned char *)src;
	while (len > 0)
	{
		dest[len - 1] = dsrc[len - 1];
		len--;
	}
	return (dst);
}

/*
int main(void)
{
	char dst[100] = "ola";
	const char src[100] = " como esta";

	printf("Antes memmove dest = %s, src = %s\n", dst, src);
	ft_memmove(dst, src, 4);
	printf("Depois memmove dest = %s, src = %s\n", dst, src);
}
*/
