/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskinner <mskinner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 11:56:22 by mskinner          #+#    #+#             */
/*   Updated: 2020/03/12 17:17:07 by mskinner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str.h"

int		ft_print_err(int n)
{
	if (n == 1)
	{
		write(2, "File name missing.\n", 19);
		return (1);
	}
	else if (n > 2)
	{
		write(2, "Too many arguments.\n", 20);
		return (1);
	}
	return (0);
}

void	ft_write_file(char *file_name)
{
	int		fd;
	char	str;

	fd = open(file_name, O_RDONLY);
	while (read(fd, &str, 1))
		write(1, &str, 1);
	close(fd);
	return ;
}

int		main(int argc, char **argv)
{
	if (ft_print_err(argc))
		return (0);
	ft_write_file(argv[1]);
	return (0);
}
