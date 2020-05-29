/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskinner <mskinner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 11:00:46 by mskinner          #+#    #+#             */
/*   Updated: 2020/03/10 13:12:59 by mskinner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
