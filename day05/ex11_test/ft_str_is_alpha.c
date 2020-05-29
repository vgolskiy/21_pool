/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskinner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 20:19:52 by mskinner          #+#    #+#             */
/*   Updated: 2020/03/03 20:24:23 by mskinner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] > 90 && str[i] < 97) ||
		(str[i] > 122) || (str[i] < 65))
			return (0);
		i++;
	}
	return (1);
}

int		main()
{
	char a[20];

	//scanf("%s", a);
	//printf("%d", ft_str_is_alpha(a));
	printf("%d", ft_str_is_alpha("sdgf gfshgd"));
	return (0);
}
