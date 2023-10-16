/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 10:37:40 by jbergfel          #+#    #+#             */
/*   Updated: 2023/10/16 10:37:41 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	if (n != 0)
		ft_memset(str, '\0', n);
}

/*
int main(void)
{
	char str[50];
	strcpy(str, "olha essa string com isso aqui");
	ft_bzero(str, 4);
	ft_putstr_fd(str, 1);
}
*/
