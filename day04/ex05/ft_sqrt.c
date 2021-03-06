/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskinner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 17:38:20 by mskinner          #+#    #+#             */
/*   Updated: 2020/02/29 18:04:43 by mskinner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	float tmp;
	float res;
	float nbn;

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
		if (res * res == nb)
			return (res);
	}
	return (0);
}
