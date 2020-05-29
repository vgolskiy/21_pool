/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskinner <mskinner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 21:02:10 by mskinner          #+#    #+#             */
/*   Updated: 2020/03/10 18:01:09 by mskinner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_calculator.h"

int		ft_oper(char *op)
{
	if (op[1] == '\0')
	{
		if (op[0] == 47)
			return (1);
		else if (op[0] == 42)
			return (2);
		else if (op[0] == 43)
			return (3);
		else if (op[0] == 45)
			return (4);
		else if (op[0] == 37)
			return (5);
	}
	return (0);
}

int		ft_zero_print(char *op, int n)
{
	if (op[1] == '\0')
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
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int		n1;
	int		n2;
	int		(*ft_func[6])(int, int);

	ft_func[1] = ft_div;
	ft_func[2] = ft_mult;
	ft_func[3] = ft_add;
	ft_func[4] = ft_substr;
	ft_func[5] = ft_mod;
	if ((argc < 4) || (argc > 4))
		return (0);
	n1 = ft_atoi(argv[1]);
	n2 = ft_atoi(argv[3]);
	if (ft_zero_print(argv[2], n2))
		return (0);
	if (ft_oper(argv[2]))
	{
		ft_putnbr(ft_func[ft_oper(argv[2])](n1, n2));
		ft_putchar('\n');
	}
	else
		ft_putstr("0\n");
	return (0);
}
