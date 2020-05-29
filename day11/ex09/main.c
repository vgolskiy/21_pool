/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskinner <mskinner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 19:40:33 by mskinner          #+#    #+#             */
/*   Updated: 2020/03/11 20:58:21 by mskinner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list_push_params.c"
#include "ft_create_elem.c"
#include "ft_list_reverse.c"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char ch)
{
	write(1, &ch, 1);
	return ;
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	return ;
}

void	ft_putlist(t_list *begin_list)
{
	t_list *list;

	list = begin_list;
	while (list)
	{
		ft_putstr(list->data);
		ft_putstr("\n");
		list = list->next;
	}
}

int		main(int argc, char **argv)
{
	t_list	*list;

	if (argc)
	{
		list = ft_list_push_params(argc, argv);
		ft_list_reverse(&list);
		ft_putlist(list);
	}
	return (0);
}