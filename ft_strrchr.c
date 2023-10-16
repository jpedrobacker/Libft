/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 10:39:18 by jbergfel          #+#    #+#             */
/*   Updated: 2023/10/16 10:39:19 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;
	int	j;
	char	*stri;

	i = 0;
	stri = (char *)str;
	if (c == 0)
		return (stri + i);
	while(str[i] != '\0')
	{
		if (stri[i] == c)
			j = i;
		i++;
	}
	if (stri[j] != c)
		return (0);
	else
		return (stri + j);
}

/*
int main(void)
{
  char *str = "sd.ha.hsduha.joao";
  printf("%s", ft_strrchr(str, '.'));
}
*/
