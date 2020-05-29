/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskinner <mskinner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 21:02:10 by mskinner          #+#    #+#             */
/*   Updated: 2020/03/10 19:10:33 by mskinner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_calculator.h"
#include "ft_opp.h"
#include "ft_struct.h"

void	(*ft_oper(char *op))(int, int)
{
	int i;

	i = 0;
	while (g_opptab[i].s[0] != '\0')
	{
		if (ft_strcmp(&g_opptab[i].s[0], op) == 0)
			return (g_opptab[i].f);
		i++;
	}
	return (g_opptab[i].f);
}

void	ft_usage(int n1, int n2)
{
	int i;

	i = 0;
	(void)n1;
	(void)n2;
	ft_putstr("error : only [ ");
	while (g_opptab[i].s[0] != '\0')
	{
		ft_putstr(&g_opptab[i].s[0]);
		ft_putstr(" ");
		i++;
	}
	ft_putstr("] are accepted.");
	return ;
}

int		main(int argc, char **argv)
{
	int		n1;
	int		n2;
	void	(*func)(int, int);

	if ((argc < 4) || (argc > 4))
		return (0);
	n1 = ft_atoi(argv[1]);
	n2 = ft_atoi(argv[3]);
	func = ft_oper(argv[2]);
	if (func)
	{
		func(n1, n2);
		ft_putchar('\n');
	}
	else
		ft_putstr("0\n");
	return (0);
}
