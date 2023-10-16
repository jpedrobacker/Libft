/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 10:39:26 by jbergfel          #+#    #+#             */
/*   Updated: 2023/10/16 10:39:27 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c += 32;
	return (c);
}

/*
int main(void)
{
	char str[] = "ola";
	int i = 0;
	while (str[i] != '\0')
	{
		printf("%c", ft_tolower(str[i]));
		i++;
	}
	printf("\n");
}
*/
