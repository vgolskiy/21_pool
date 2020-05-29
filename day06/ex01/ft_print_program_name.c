/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskinner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 15:31:18 by mskinner          #+#    #+#             */
/*   Updated: 2020/03/04 15:37:46 by mskinner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char ch);

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc)
	{
		while (argv[0][i] != '\0')
		{
			ft_putchar(argv[0][i]);
			i++;
		}
		ft_putchar('\n');
	}
	return (0);
}
