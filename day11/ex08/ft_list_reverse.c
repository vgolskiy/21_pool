/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskinner <mskinner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 15:52:21 by mskinner          #+#    #+#             */
/*   Updated: 2020/03/11 17:12:22 by mskinner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*further;
	t_list	*current;
	t_list	*previous;

	further = 0;
	previous = 0;
	current = *begin_list;
	while (current)
	{
		further = current->next;
		current->next = previous;
		previous = current;
		current = further;
	}
	*begin_list = previous;
}
