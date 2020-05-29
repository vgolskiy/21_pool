/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskinner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 22:13:31 by mskinner          #+#    #+#             */
/*   Updated: 2020/02/28 22:16:18 by mskinner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int d;
	int m;

	d = *a / *b;
	m = *a % *b;
	*a = d;
	*b = m;
	return ;
}

int		main()
{
	int a;
	int b;
	int *div;
	int *mod;
	
	a = 10;
	b = 3;
	div = &a;
	mod = &b;
	ft_ultimate_div_mod(div, mod);
	printf("%d", a);
	printf("%s", "\n");
	printf("%d", b);
	return (0);
}