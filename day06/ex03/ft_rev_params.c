/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskinner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 17:16:09 by mskinner          #+#    #+#             */
/*   Updated: 2020/03/04 17:16:53 by mskinner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char ch);

int		main(int argc, char **argv)
{
	int i;
	int j;

	i = argc - 1;
	if (argc > 1)
	{
		while (i > 0)
		{
			j = 0;
			while (argv[i][j] != '\0')
			{
				ft_putchar(argv[i][j]);
				j++;
			}
			ft_putchar('\n');
			i--;
		}
	}
	return (0);
}
