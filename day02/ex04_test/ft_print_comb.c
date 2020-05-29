/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskinner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 17:34:16 by mskinner          #+#    #+#             */
/*   Updated: 2020/02/27 17:56:19 by mskinner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putchar.c"


void	print_num(char i, char j, char k)
{	
	ft_putchar(i);
	ft_putchar(j);
	ft_putchar(k);
	return ;
}

void	print_symbols(void)
{	
	char sp;
	char com;

	sp = 32;
	com = 44;	
	ft_putchar(com);
	ft_putchar(sp);
	return ;
}

int	printing_case(int flag, char i, char j, char k)
{
	if (flag == 0)
	{
		print_num(i, j, k);
		flag++;
	}
	else
	{
		print_symbols();
		print_num(i, j, k);
	}
	return flag;
}

void	iter_steps(char i, char j, char k)
{
	int flag;

	flag = 0;
	while (i <= 57)
	{
		j = i + 1;
		while (j <= 57)
		{
			k = j + 1;
			while (k <= 57)
			{
				flag = printing_case(flag, i, j, k);
				k++;
			}
			j++;
		}
		i++;
	}
	return ;
}

int	main(void)
{
	char i;
	char j;
	char k;

	i = 48;
	j = i + 1;
	k = j + 1;
	iter_steps(i, j, k);
	return 0;
}
