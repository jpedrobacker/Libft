/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 10:38:28 by jbergfel          #+#    #+#             */
/*   Updated: 2023/10/16 11:58:41 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*s;

	i = 0;
	s = (unsigned char *)b;
	while (i < len)
	{
		s[i++] = (unsigned char)c;
	}
	return (s);
}

/*
int main(void)
{
	char str[50];
	strcpy(str, "com isso daqui completa com isso");
	ft_memset(str, '$', 5);
	ft_putstr_fd(str, 1);
}
*/
