/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operations2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskinner <mskinner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 22:54:11 by mskinner          #+#    #+#             */
/*   Updated: 2020/03/09 23:36:05 by mskinner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_calculator.h"

int		ft_substr(int n1, int n2)
{
	return (n1 - n2);
}

int		ft_mod(int n1, int n2)
{
	return (n1 % n2);
}

int		ft_power(int nb, int power)
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
			res *= nb;
			ft_power(nb, --power);
		}
	return (res);
}
