/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskinner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 21:10:57 by mskinner          #+#    #+#             */
/*   Updated: 2020/03/04 21:11:44 by mskinner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char ch)
{
	write(1, &ch, 1);
	return ;
}

int		ft_wspace(char ch)
{
	if ((ch == 32) || (ch == '\t') || (ch == '\n'))
		return (1);
	return (0);
}

void	*ft_strcpy(char *str)
{
	char *dest;
	int i;

	i = 0;
	dest = 00;
	while (str[i] != '\0')
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	**ft_split_whitespaces(char *str)
{
	int i;
	int j;
	char **dest;

	dest = (char**)malloc(37 * sizeof(str));
	i = 0;
	j = 0;
	while (ft_wspace(str[i++]))
	while (str[i]!= '\0')
	{
		if (ft_wspace(str[i]))
			j++;
		dest[j] = ft_strcpy(str);
	}
	return (dest);
}

int		main()
{
	char *str;
	int i;
	int j;
	char **dest;

	//scanf("%s", src);
	str = "This is  the first	try\nsplitting\n\t";
	dest = ft_split_whitespaces(str);
	i = 0;
	while (dest[i])
	{
		j = 0;
		while (dest[i][j] != '\0')
		{
			ft_putchar(dest[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
	return (0);
}
