/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskinner <mskinner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 21:02:10 by mskinner          #+#    #+#             */
/*   Updated: 2020/03/10 00:03:55 by mskinner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_calculator.h"

int		(*ft_oper(char *op))(int, int)
{
	if (op[1] == '\0')
	{
		if (op[0] == 47)
			return (&ft_div);
		else if (op[0] == 42)
			return (&ft_mult);
		else if (op[0] == 43)
			return (&ft_add);
		else if (op[0] == 45)
			return (&ft_substr);
		else if (op[0] == 37)
			return (&ft_mod);
	}
	return (0);
}

int		ft_zero_print(char *op, int n)
{
	if ((op[0] == 47) && (n == 0))
	{
		ft_putstr("Stop : division by zero\n");
		return (1);
	}
	else if ((op[0] == 37) && (n == 0))
	{
		ft_putstr("Stop : modulo by zero\n");
		return (1);
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int		n1;
	int		n2;
	int		(*ft_func)(int, int);

	if ((argc < 4) || (argc > 4))
		return (0);
	n1 = ft_atoi(argv[1]);
	ft_func = ft_oper(argv[2]);
	n2 = ft_atoi(argv[3]);
	if (ft_zero_print(argv[2], n2))
		return (0);
	if (ft_func)
	{
		ft_putnbr(ft_func(n1, n2));
		ft_putchar('\n');
	}
	else
		ft_putstr("0\n");
	return (0);
}
