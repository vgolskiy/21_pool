/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskinner <mskinner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 14:34:38 by mskinner          #+#    #+#             */
/*   Updated: 2020/03/12 15:49:19 by mskinner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	int		i;
	t_list	*tmp;
	t_list	*list;

	i = 1;
	if (ac == 1)
		list = 0;
	else
	{
		list = ft_create_elem(av[0]);
		while (i < ac)
		{
			tmp = list;
			list = ft_create_elem(av[i]);
			list->next = tmp;
			i++;
		}
	}
	return (list);
}
