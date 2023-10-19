/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 12:07:33 by jbergfel          #+#    #+#             */
/*   Updated: 2023/10/19 13:34:15 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst->content);
	free(lst);
	lst = NULL;
}

/*
void	ft_del(void *content)
{
	*(int*)content = 0;
}

int main(void)
{
		int		tab[20];
	int		i;
	t_list	*begin;

	*tab = 0;
	begin = ft_lstnew(tab);
	printf("\n=========== TESTING LSTNEW  ============\n\n");
	if (begin && !begin->next && begin->content && *((int*)begin->content) == 0)
		printf("OK\n");
	else
		printf("Try again.\n");

	printf("\n\n=========== TESTING LSTADD_FRONT  ============\n\n");
	i = 0;
	while (++i < 10)
	{
		tab[i] = i;
		ft_lstadd_front(&begin, ft_lstnew(tab + i));
	}
	t_list	*tmp = begin;
	printf("Should print numbers from 9 to 0.\n");
	while (tmp)
	{
		printf("%i ", *((int*)tmp->content));
		tmp = tmp->next;
	}
	printf("\n\n=========== TESTING LSTADD_BACK  ============\n\n");
	i = 0;
	while (++i < 10)
	{
		tab[i + 10] = -i;
		ft_lstadd_back(&begin, ft_lstnew(tab + i + 10));
	}
	tmp = begin;
	printf("Should print numbers from 9 to -9 :\n");
	while (tmp)
	{
		printf("%i ", *((int*)tmp->content));
		tmp = tmp->next;
	}

	printf("\n\n=========== TESTING LSTDELONE  ============\n\n");
	tmp = begin->next;
	ft_lstdelone(begin, ft_del);
	begin = tmp;
	printf("Should print numbers from 8 to -9 :\n");
	while (tmp)
	{
		printf("%i ", *((int*)tmp->content));
		tmp = tmp->next;
	}
}
*/
