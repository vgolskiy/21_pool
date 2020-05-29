/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskinner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 19:23:01 by mskinner          #+#    #+#             */
/*   Updated: 2020/03/03 19:27:59 by mskinner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int i;
	int m;

	i = 0;
	m = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 48) && (str[i] <= 57) && (m == 0))
			m = 1;
		else if ((str[i] >= 97) && (str[i] <= 122) && (m == 0))
		{
			m = 1;
			str[i] -= 32;
		}
		else if ((str[i] >= 65) && (str[i] <= 90) && (m == 1))
			str[i] += 32;			
		else if (!(((str[i] >= 97) && (str[i] <= 122)) ||
		((str[i] >= 65) && (str[i] <= 90)) ||
		((str[i] >= 48) && (str[i] <= 57))))
			m = 0;
		i++;
	}
	return (str);
}

int		main()
{
	char a[] = "salut, coMMent tu vas ? 42mots quarante-deux; cinquante+et+un";

	printf("%s", ft_strcapitalize(a));
	return (0);
}
