/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskinner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 12:08:22 by mskinner          #+#    #+#             */
/*   Updated: 2020/02/27 12:21:05 by mskinner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char ch);

void	ft_print_reverse_alphabet(void)
{
	char ch;

	ch = 122;
	while (ch >= 97)
	{
		ft_putchar(ch);
		ch--;
	}
	return ;
}
