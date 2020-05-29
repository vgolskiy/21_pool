/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskinner <mskinner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 22:06:42 by mskinner          #+#    #+#             */
/*   Updated: 2020/03/11 22:34:41 by mskinner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
	t_list	*tmp;
	t_list	*list;

	list = *begin_list;
	tmp = ft_create_elem(data);
	if (!list)
		*begin_list = tmp;
	else
	{
		while ((list->next) && ((*cmp)(list->next->data, data) <= 0))
			list = list->next;
		tmp->next = list->next;
		list->next = tmp;
	}
	return ;
}
