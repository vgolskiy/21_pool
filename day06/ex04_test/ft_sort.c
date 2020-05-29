/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskinner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 17:46:51 by mskinner          #+#    #+#             */
/*   Updated: 2020/03/04 17:48:09 by mskinner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char ch)
{
	write(1, &ch, 1);
	return ;
}

void	ft_print_args(int argc, char **argv)
{
	int j;
	int i;

	j = 0;
	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		ft_putchar('\n');
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

void	ft_swap(char **a, char **b)
{
	char *tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
	return ;
}

void	ft_bubble_sort(char **arr, int n)
{
	int i;
	int j;

	i = 1;
	if (n == 1)
		return ;
	while (i < n)
	{
		j = i;
		while (j < n - 1)
		{
			if (ft_strcmp(arr[i], arr[j + 1]) > 0)
				ft_swap(&arr[i], &arr[j + 1]);
			j++;
		}
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc > 1)
	{
		ft_bubble_sort(argv, argc);
		ft_print_args(argc, argv);
	}
	return (0);
}
