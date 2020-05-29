/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskinner <mskinner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 15:28:14 by mskinner          #+#    #+#             */
/*   Updated: 2020/03/12 15:52:01 by mskinner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list *list;
	int		i;

	list = begin_list;
	i = 0;
	while ((nbr != i) && list)
	{
		list = list->next;
		i++;
	}
	if (list)
		return (list);
	else
		return (0);
}
