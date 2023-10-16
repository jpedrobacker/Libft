/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 10:38:50 by jbergfel          #+#    #+#             */
/*   Updated: 2023/10/16 10:38:51 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;
	char	*stri;

	stri = (char *)str;
	i = 0;
	if (c == 0)
		return (stri + i);
	while (stri[i] != '\0')
	{
		if (str[i] == c)
			return (stri + i);
		i++;
	}
	return (0);
}

/*
int main (void)
{
	char *str = "sdhahsduha.joao";
	printf("%s", ft_strchr(str, '+'));
}
*/
