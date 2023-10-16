/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 10:39:29 by jbergfel          #+#    #+#             */
/*   Updated: 2023/10/16 10:39:30 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}

/*
int main(void)
{
	char str[] = "ola";
	int i = 0;
	while (str[i] != '\0')
	{
		printf("%c", ft_toupper(str[i]));
		i++;
	}
	printf("\n");
}
*/
