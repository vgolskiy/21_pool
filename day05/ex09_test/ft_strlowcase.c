/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskinner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 19:23:01 by mskinner          #+#    #+#             */
/*   Updated: 2020/03/03 19:27:59 by mskinner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 65) && (str[i] <= 90))
			str[i] += 32;
		i++;
	}
	return (str);
}

int		main()
{
	char a[] = "THIS IS TEST, RIGHT? YO! FATHER'S SON.";

	printf("%s", ft_strlowcase(a));
	return (0);
}
