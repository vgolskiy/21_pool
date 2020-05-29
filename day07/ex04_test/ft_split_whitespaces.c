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

int		ft_str_not_alphanum(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] > 90 && str[i] < 97) ||
		(str[i] > 122) || (str[i] > 57 && str[i] < 65) ||
		(str[i] < 48))
			return (1);
		i++;
	}
	return (0);
}


void	
			while (argv[i][j] != '\0')
				dest[k++] = argv[i][j++];
			dest[k++] = '\n';
			i++;

char	**ft_split_whitespaces(char *str)
{
	int i;
	char **dest;

	dest = (char**) malloc(37 * sizeof(str));
	i = 0;
	while ft_str_is_alphanum(str[i++])
	while (str[i]!= '\0')
		if (ft_wspace(str[i]))
		{

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
	src = "This is  the first	try\nsplitting\n\t";
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
