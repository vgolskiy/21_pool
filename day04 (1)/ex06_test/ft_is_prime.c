/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskinner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 18:46:11 by mskinner          #+#    #+#             */
/*   Updated: 2020/02/29 18:54:02 by mskinner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_sqrt(int nb)
{
	long tmp;
	long res;
	long nbn;

	nbn = nb;
	if (nb >= 0)
	{
		res = nbn / 2;
		tmp = 0;
		while (res != tmp)
		{
			tmp = res;
			res = (nbn / tmp + tmp) / 2;
		}
		return (res);
	}
	return (0);
}

int		ft_is_prime(int nb)
{
	int sqrt;
	int i;

	if (nb <= 1)
		return (0);
	else
	{
		i = 2;
		sqrt = ft_sqrt(nb);
		while (i <= sqrt)
		{
			if (nb % i == 0)
				return (0);
			i++;
		}
		return (1);
	}
}

int		main()
{
	int n;
	
	printf("Enter a number: ");
	scanf("%d", &n);
	n = ft_is_prime(n);
	printf("\nResult: ");
	printf("%d", n);			
	return (0);	
}
