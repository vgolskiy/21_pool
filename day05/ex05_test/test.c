/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskinner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 16:05:29 by mskinner          #+#    #+#             */
/*   Updated: 2020/03/03 16:07:21 by mskinner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;

	i = 0;
	if (NULL == to_find)
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		if (str[i] == to_find[j])
		{
			while ((to_find[j] != '\0') && (str[i] == to_find[j]))
			{
				i++;
				j++;
			}
			if (to_find[j] == '\0')
				return (str + (i - j));
		}
		i++;
	}
	return NULL;
}

int		main()
{
	char a[] = "tes test string for testing";
	char *b = NULL;

	printf("%s", ft_strstr(a, b));
	return (0);
}
