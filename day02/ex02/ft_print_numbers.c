/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskinner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 13:21:56 by mskinner          #+#    #+#             */
/*   Updated: 2020/02/27 13:28:57 by mskinner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char ch);

void	ft_print_numbers(void)
{
	char num;

	num = 48;
	while (num <= 57)
	{
		ft_putchar(num);
		num++;
	}
	return ;
}
