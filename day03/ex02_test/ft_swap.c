/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskinner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 21:20:10 by mskinner          #+#    #+#             */
/*   Updated: 2020/02/28 21:22:07 by mskinner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
	return ;
}

int		main()
{
	int *p1;
	int *p2;
	int a;
	int b;
	
	a = 10;
	b = 20;
	p1 = &a;
	p2 = &b;
	printf("%d", a);
	printf("%s", "\n");
	printf("%d", b);
	printf("%s", "\n");
	printf("%s", "\n");
	ft_swap(p1, p2);
	printf("%d", a);
	printf("%s", "\n");
	printf("%d", b);
	return (0);
}
		
