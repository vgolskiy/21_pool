/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskinner <mskinner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 19:40:33 by mskinner          #+#    #+#             */
/*   Updated: 2020/03/11 20:26:00 by mskinner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list_push_front.c"
#include "ft_create_elem.c"
#include "ft_list_size.c"
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
		list = list->next;
	}
}

int		main()
{
	t_list *list;

	list = NULL;
	ft_list_push_front(&list, "test1\n");
	ft_list_push_front(&list, "test2\n");
	ft_list_push_front(&list, "test3\n");
	ft_putlist(list);
	printf("%d", ft_list_size(list));
	return (0);
}