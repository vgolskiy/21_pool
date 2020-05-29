/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskinner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 11:43:26 by mskinner          #+#    #+#             */
/*   Updated: 2020/03/03 11:55:34 by mskinner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_search_pos(char *str, char *to_find)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] == to_find[j])
		{
			while (to_find[j] != '\0')
			{
				if (str[i] != to_find[j])
				{
					j = 0;
					break ;
				}
				i++;
				j++;
			}
			if (to_find[j] == '\0')
				return (i - j);
		}
		i++;
	}
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	char	*res;

	i = ft_search_pos(str, to_find);
	j = 0;
	while (str[i] != '\0')
	{
		res[j] = str[i];
		j++;
		i++;
	}
	return (res);
}
