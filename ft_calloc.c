/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 10:37:45 by jbergfel          #+#    #+#             */
/*   Updated: 2023/10/16 10:37:46 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*i;
	size_t	s;

	s = nitems * size;
	if (!(i = malloc(s)))
		return (NULL);
	ft_bzero(i, s);
	return (i);
}

/*
int main(void)
{
	int i = 0;
	int n = 5;
	int *ptr = (int *)ft_calloc(n, sizeof(int));

	while (i < n)
	{
		ptr[i] = i + 1;
		i++;
	}
	i = 0;
	while (i < n)
	{
		printf("%d, ", ptr[i++]);
	}
}
*/
