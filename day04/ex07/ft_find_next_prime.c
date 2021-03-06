/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskinner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 18:46:11 by mskinner          #+#    #+#             */
/*   Updated: 2020/02/29 18:54:02 by mskinner         ###   ########.fr       */
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

int		ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb) == 0)
	{
		nb++;
		while (ft_is_prime(nb) == 0)
			nb++;
	}
	return (nb);
}
