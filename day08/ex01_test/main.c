/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskinner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 14:08:06 by mskinner          #+#    #+#             */
/*   Updated: 2020/03/06 14:09:11 by mskinner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		main()
{
	int a;
	int b;

	a = 1;
	b = 2;
	ft_putchar(97);
	ft_putstr("\nstring\n");
	ft_strcmp("char *s1", "char *s2");
	ft_strlen("char *str");
	ft_swap(&a, &b);
	return (0);
}