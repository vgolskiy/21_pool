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
	if (nbr < 0)
	{
		if (nbr == -2147483648)
		{
			ft_putchar(45);
			ft_putchar(50);
			ft_putnbr(147483648);
		}
		else
		{
			ft_putchar(45);
			nbr = -nbr;
		}
	}
	if (nbr >= 10)
	{
		ft_putnbr(nbr / 10);
		tmp = nbr % 10;
	}
	ft_putchar(tmp + '0');
	return ;
}
