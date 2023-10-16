/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 10:38:56 by jbergfel          #+#    #+#             */
/*   Updated: 2023/10/16 12:30:14 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, s + i);
		i++;
	}
}

/*
void func(unsigned int i, char *str)
{
	printf("%d, %s\n", i, str);
}

int main(void)
{
	char str[10] = "alo.";
	printf("%s\n", str);
	ft_striteri(str, func);
	printf("%s\n", str);
	return (0);
}
*/
