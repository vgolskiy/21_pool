/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskinner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 12:31:07 by mskinner          #+#    #+#             */
/*   Updated: 2020/02/29 12:46:15 by mskinner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int res;

	res = 1;
	if (nb == 0)
	{
		return (res);
	}
	else if (nb < 0 || nb > 12)
	{
		return (0);
	}
		else while (nb > 1)
		{
			res = res * nb;
			nb--;
		}
	return (res);
}
