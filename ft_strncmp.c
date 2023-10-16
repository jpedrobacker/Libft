/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 10:39:13 by jbergfel          #+#    #+#             */
/*   Updated: 2023/10/16 12:20:26 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	if (n != 0)
	{
		while (str1[i] == str2[i] && (str1[i] != 0 && str2[i] != 0) && i < n -1)
		{
			i++;
		}
	}
	else
	{
		return (0);
	}
	return (str1[i] - str2[i]);
}

/*
int main(void)
{
  printf("%d", ft_strncmp("ABCDDASD", "ABCDasda", 6));
}
*/
