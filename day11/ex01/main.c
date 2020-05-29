/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskinner <mskinner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 19:40:33 by mskinner          #+#    #+#             */
/*   Updated: 2020/03/11 19:58:38 by mskinner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list_push_back.c"
#include "ft_create_elem.c"
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

int		main()
{
	t_list *list;

	list = NULL;
	ft_list_push_back(&list, "test1\n");
	ft_list_push_back(&list, "test2\n");
	ft_list_push_back(&list, "test3\n");

	while (list)
	{
		ft_putstr(list->data);
		list = list->next;
	}
	return (0);
}