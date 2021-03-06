/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskinner <mskinner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 16:45:45 by mskinner          #+#    #+#             */
/*   Updated: 2020/03/09 17:16:53 by mskinner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char ch)
{
	write(1, &ch, 1);
	return ;
}

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

int		*ft_range(int min, int max)
{
	int *res;
	int i;

	if (min >= max)
		return (0);
	else
	{
		res = (int*)malloc((max - min) * sizeof(int));
		if (res == 00)
			return (0);
		i = 0;
		while (min < max)
			res[i++] = min++;
		return (res);
	}
}

void	ft_foreach(int *tab, int length, void(*f)(int))
{
	int i;

	i = 0;
	while(i < length)
	{
		(*f)(tab[i]);
		i++;
	}
}

int		ft_atoi(char *str)
{
	int tmp;
	int i;
	int sign;

	tmp = 0;
	i = 0;
	sign = 1;
	if (00 == str)
		return (0);	
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] == '\t' || str[i] == '\v' || str[i] == '\f' ||
		str[i] == '\n' || str[i] == ' ' || str[i] == '\r')
		i++;
	while (str[i] != '\0')
	{
		if (str[i] >= 48 && str[i] <= 57)
			tmp = tmp * 10 + str[i] - '0';
		else
			break ;
		i++;
	}
	return (sign * tmp);
}

int		main(int argc, char **argv)
{
	int		*tab;
	int		min;
	int		max;

	if (argc)
	{
		min = ft_atoi(argv[1]);
		max = ft_atoi(argv[2]);
		tab = ft_range(min, max);
		ft_foreach(tab, max - min, &ft_putnbr);
	}
	return (0);
}
