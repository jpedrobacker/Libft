/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 10:39:07 by jbergfel          #+#    #+#             */
/*   Updated: 2023/10/16 10:39:08 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(char const *str)
{
	size_t len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

/*
int main(void)
{
  char str[] = "Ola";

  printf("%ld", ft_strlen(str));
}
*/
