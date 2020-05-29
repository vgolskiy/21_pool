/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskinner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 10:25:33 by mskinner          #+#    #+#             */
/*   Updated: 2020/02/28 11:49:31 by mskinner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	int a0;
	int *a;
	int **b;
	int ***c;
	int ****d;
	int *****e;
	int ******f;
	int *******g;
	int ********k;

	a0 = 42;
	a = &a0;
	b = &a;
	c = &b;
	d = &c;
	e = &d;
	f = &e;
	g = &f;
	k = &g;
	nbr = &k;
	return ;
}

int		main()
{
	int *********a;	

	ft_ultimate_ft(a);
	printf("%d", *********a);
	return (0);
}
