/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskinner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 16:38:56 by mskinner          #+#    #+#             */
/*   Updated: 2020/03/03 16:52:26 by mskinner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 97) && (str[i] <= 122))
			str[i] -= 32;
		i++;
	}
	return (str);	
}

int		main()
{
	char a[] = "This is test, right? Yo! Father's son.";

	printf("%s", ft_strupcase(a));
	return (0);
}
