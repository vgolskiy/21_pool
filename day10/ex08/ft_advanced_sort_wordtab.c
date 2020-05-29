/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_wordtab.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskinner <mskinner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 13:16:53 by mskinner          #+#    #+#             */
/*   Updated: 2020/03/10 13:46:42 by mskinner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_str_swap(char **a, char **b)
{
	char *tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
	return ;
}

void	ft_advanced_sort_wordtab(char **tab, int (*cmp)(char *, char *))
{
	int i;
	int j;

	i = 0;
	if (tab[i] == 0 || tab[i + 1] == 0)
		return ;
	while (tab[i] != 0)
	{
		j = i + 1;
		while (tab[j] != 0)
		{
			if ((*cmp)(tab[i], tab[j]) > 0)
				ft_str_swap(&tab[i], &tab[j]);
			j++;
		}
		i++;
	}
	return ;
}
