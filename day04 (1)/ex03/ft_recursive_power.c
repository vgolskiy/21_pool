/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskinner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 15:15:18 by mskinner          #+#    #+#             */
/*   Updated: 2020/02/29 15:16:46 by mskinner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
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
			ft_recursive_power(nb, --power);
		}
	return (res);
}
