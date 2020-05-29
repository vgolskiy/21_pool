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

int		ft_size(int argc, char **argv)
{
	int		size;
	int 	i;

	i = 0;
	size = 0;
	if (argc > 1)
	{
		size += sizeof(argv[i])/sizeof(char);
		i++;
	}
	return (size);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*dest;
	int		i;
	int		j;
	int		k;

	if (argc > 1)
	{
		i = 1;
		k = 0;
		j = ft_size(argc, argv);
		dest = (char*)malloc(j * sizeof(char));
		if (dest == 00)
			return (00);
		while (i < argc)
		{
			j = 0;
			while (argv[i][j] != '\0')
				dest[k++] = argv[i][j++];
			dest[k++] = '\n';
			i++;
		}
		dest[k] = '\0';
		return (dest);
	}
	return ("\n");
}

int		main(int argc, char **argv)
{
	if (ft_concat_params(argc, argv) == NULL)
		printf("%s", NULL);
	else
		printf("%s", ft_concat_params(argc, argv));
	return (0);
}
