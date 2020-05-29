/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operations.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskinner <mskinner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 22:54:11 by mskinner          #+#    #+#             */
/*   Updated: 2020/03/10 19:14:34 by mskinner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_calculator.h"

void	ft_div(int n1, int n2)
{
	if (n2 == 0)
		ft_putstr("Stop : division by zero");
	else
		ft_putnbr(n1 / n2);
	return ;
}

void	ft_mul(int n1, int n2)
{
	ft_putnbr(n1 * n2);
	return ;
}

void	ft_add(int n1, int n2)
{
	ft_putnbr(n1 + n2);
	return ;
}

void	ft_sub(int n1, int n2)
{
	ft_putnbr(n1 - n2);
	return ;
}

void	ft_mod(int n1, int n2)
{
	if (n2 == 0)
		ft_putstr("Stop : modulo by zero");
	else
		ft_putnbr(n1 % n2);
	return ;
}
