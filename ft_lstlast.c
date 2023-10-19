/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 11:32:08 by jbergfel          #+#    #+#             */
/*   Updated: 2023/10/19 11:51:01 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*temp;

	temp = lst;
	while (temp->next != NULL)
		temp = temp->next;
	return (temp);
}
/*
int main(void)
{
	int		tab[20];
	int		i;
	t_list	*begin;

	*tab = 0;
	begin = ft_lstnew(tab);

	i = 0;
	while (++i < 10)
	{
		tab[i] = i;
		ft_lstadd_front(&begin, ft_lstnew(tab + i));
	}
	//t_list	*tmp = begin;
	if (*((int*)(ft_lstlast(begin)->content)) == 0)
		printf("OK: expected list->content to be %d, got %d.\n"\
		, 0, *((int*)(ft_lstlast(begin)->content)));
	else
		printf("Try again: expected list->content to be %d, got %d.\n"\
		, 0, *((int*)(ft_lstlast(begin)->content)));

}
*/
