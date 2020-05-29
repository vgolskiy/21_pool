/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskinner <mskinner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 11:00:46 by mskinner          #+#    #+#             */
/*   Updated: 2020/03/10 13:02:12 by mskinner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_print_args(int argc, char **argv)
{
	int		j;
	int		i;

	j = 0;
	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
	return ;
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while ((s1[i] != '\0') && (s2[i] != '\0') &&
	(s1[i] == s2[i]))
		i++;
	return (s1[i] - s2[i]);
}

void	ft_str_swap(char **a, char **b)
{
	char *tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
	return ;
}

void	ft_sort_wordtab(char **tab)
{
	int		i;
	int		j;

	i = 0;
	if (tab[i] == 0 || tab[i + 1] == 0)
		return ;
	while (tab[i] != 0)
	{
		j = i + 1;
		while (tab[j] != 0)
		{
			if (ft_strcmp(tab[i], tab[j]) > 0)
				ft_str_swap(&tab[i], &tab[j]);
			j++;
		}
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc)
	{
		ft_sort_wordtab(argv);
		ft_print_args(argc, argv);
	}
	return (0);
}
