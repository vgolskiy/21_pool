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

int		ft_not_wspace(char ch)
{
	if ((ch == 32) || (ch == '\t') || (ch == '\n'))
		return (0);
	return (1);
}

int		ft_word_qty(char *str)
{
	int i;
	int w;
	int q;

	i = 0;
	w = 0;
	q = 0;
	while (str[i] != '\0')
	{
		if (ft_not_wspace(str[i]) && w == 0)
		{
			q++;
			w = 1;
		}
		else if (!(ft_not_wspace(str[i])))
			w = 0;
		i++;
	}
	return (q);
}

int		ft_lett_qty(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0' && ft_not_wspace(str[i]))
		i++;
	return (i);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	if (src[i] == '\0')
		dest[i] = '\0';
	while ((i < n) && (src[i] != '\0'))
	{
		dest[i] = src[i];
		i++;
	}
	while (i <= n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		j;
	int		w;
	char	**dest;

	dest = (char**)malloc((ft_word_qty(str) + 1) * sizeof(char*));
	i = 0;
	w = 0;
	j = 0;
	while (str[i]!= '\0')
	{
		if (ft_not_wspace(str[i]) && w == 0)
		{
			w = 1;
			dest[j] = (char*)malloc((ft_lett_qty(&str[i]) + 1) * sizeof(char));
			dest[j] = ft_strncpy(dest[j], &str[i], ft_lett_qty(&str[i]));			
			j++;
		}
		else if (!(ft_not_wspace(str[i])))
			w = 0;
		i++;
	}
	dest[j] = 0;
	return (dest);
}

int		main()
{
	char *str;
	int i;
	int j;
	char **dest;

	str = " 	Z8Hix  		";
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
