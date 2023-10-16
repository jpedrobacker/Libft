/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 10:38:24 by jbergfel          #+#    #+#             */
/*   Updated: 2023/10/16 10:38:25 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	char *dstr1;
	char *dstr2;
	size_t i;

	i = 0;
	dstr1 = (char *)str1;
	dstr2 = (char *)str2;

	while (dstr2[i] != '\0' && i < n)
	{
		dstr1[i] = dstr2[i];
		i++;
	}
	return (dstr1);
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
