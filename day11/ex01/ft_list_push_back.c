/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskinner <mskinner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 20:17:28 by mskinner          #+#    #+#             */
/*   Updated: 2020/03/11 15:16:04 by mskinner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *current;

	current = *begin_list;
	if (!current)
		*begin_list = ft_create_elem(data);
	else
	{
		while (current->next)
			current = current->next;
		current->next = ft_create_elem(data);
	}
	return ;
}
