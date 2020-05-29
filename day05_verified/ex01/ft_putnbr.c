/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskinner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 22:30:23 by mskinner          #+#    #+#             */
/*   Updated: 2020/02/28 22:39:44 by mskinner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char ch);

void	ft_putnbr(int nbr)
{
	float tmp;

	tmp = nbr;
	
	if (nbr == -2147483648)
	{
		ft_putchar(45);
		ft_putchar(50);
		ft_putnbr(147483648);
	}
	else if (nbr < 0)
	{
		ft_putchar(45);
		ft_putnbr((-1) * nbr);
	}
	else
	{
		if (nbr >= 10)
			ft_putnbr(nbr / 10);
		ft_putchar((nbr % 10) + '0');
	}
	return ;
}
