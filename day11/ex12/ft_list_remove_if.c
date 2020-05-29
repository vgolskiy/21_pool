/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskinner <mskinner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 18:00:07 by mskinner          #+#    #+#             */
/*   Updated: 2020/03/11 18:22:47 by mskinner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *previous;
	t_list *current;
	t_list *further;

	previous = *begin_list;
	current = *begin_list;
	while (current)
	{
		further = current->next;
		if ((*cmp)(current->data, data_ref) == 0)
		{
			if (previous == *begin_list)
				*begin_list = further;
			current->next = further;
			free(previous);
		}
		current = previous;
		previous = further;
	}
	return ;
}
