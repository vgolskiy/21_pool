/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskinner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 14:34:07 by mskinner          #+#    #+#             */
/*   Updated: 2020/02/29 14:44:11 by mskinner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_power(int nb, int power)
{
	int res;

	res = 1;
	if (power < 0)
	{
		return (0);
	}
	else if (power == 0)
	{
		return (res);
	}
	else while (power > 0)
		{
			res = res * nb;
			power--;
		}
	return (res);
}	

int		main()
{
	int n;
	int p;
	
	printf("Enter a number: ");
	scanf("%d", &n);
	printf("Enter a power: ");
	scanf("%d", &p);
	n = ft_iterative_power(n, p);
	printf("\nResult: ");
	printf("%d", n);
	return (0);	
}