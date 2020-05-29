/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskinner <mskinner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 19:22:46 by mskinner          #+#    #+#             */
/*   Updated: 2020/03/11 21:18:13 by mskinner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_el_qty(t_list *begin_list)
{
	t_list	*list;
	int		i;

	i = 0;
	list = begin_list;
	while (list)
	{
		i++;
		list = list->next;
	}
	return (i);
}

t_list	*ft_list_pos(t_list *begin_list, unsigned int n)
{
	while ((n-- > 0) && begin_list)
		begin_list = begin_list->next;
	if (begin_list)
		return (begin_list);
	else
		return (0);
}

void	ft_list_swap(t_list *a, t_list *b)
{
	void *tmp;

	tmp = a->data;
	a->data = b->data;
	b->data = tmp;
}

void	ft_list_reverse_fun(t_list *begin_list)
{
	int i;
	int size;

	i = 0;
	size = ft_list_el_qty(begin_list);
	while (i < size / 2)
	{
		ft_list_swap(ft_list_pos(begin_list, i),
		ft_list_pos(begin_list, size - i - 1));
		i++;
	}
}
