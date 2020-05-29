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

void	ft_swap(char **a, char **b)
{
	char *tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
	return ;
}

int		main()
{
	char *a = "aaa"; 
	char *b = "bbbbbbb";

	printf("%s", b);
	ft_swap(&a, &b);
	printf("%s", b);
	return (0);
}
