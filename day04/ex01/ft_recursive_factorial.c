/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskinner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 13:11:10 by mskinner          #+#    #+#             */
/*   Updated: 2020/02/29 13:52:17 by mskinner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int res;

	res = 1;
	if (nb == 0 || nb == 1)
	{
		return (res);
	}
	else if (nb < 0 || nb > 12)
	{
		return (0);
	}
		else while (nb >= 2)
		{
			res = res * nb;
			nb--;
			ft_recursive_factorial(nb);
		}
	return (res);
}
