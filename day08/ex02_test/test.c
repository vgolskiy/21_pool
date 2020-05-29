/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskinner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 15:11:32 by mskinner          #+#    #+#             */
/*   Updated: 2020/03/06 15:11:40 by mskinner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdbool.h>

typedef enum { FALSE, TRUE } bool;

void ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int ft_is_even(int nbr)
{
	return (((nbr) % 2) == 0 ? TRUE : FALSE);
}
int main(int argc, char **argv)
{
	(void)argv;
	if (ft_is_even(argc - 1) == TRUE)
		ft_putstr("I have an even number of arguments.\n");
	else
		ft_putstr("I have an odd number of arguments.\n");
	return (0);
}
