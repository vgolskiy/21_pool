/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskinner <mskinner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 11:56:22 by mskinner          #+#    #+#             */
/*   Updated: 2020/03/12 20:23:45 by mskinner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str.h"

int		ft_size(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_error(char *file_name, int n)
{
	write(1, "cat: ", 5);
	write(1, file_name, ft_size(file_name));
	if (n == 13)
		write(2, ": Permission denied\n", 20);
	if (n == 21)
		write(2, ": Is a directory\n", 17);
	else if (n == 2)
		write(2, ": No such file or directory\n", 28);
}

void	ft_write_file(char *file_name)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE];

	fd = open(file_name, O_RDONLY);
	if (fd < 0)
		ft_error(file_name, errno);
	else
	{
		while ((ret = read(fd, buf, BUF_SIZE)))
			if (errno == EISDIR)
			{
				ft_error(file_name, 21);
				return ;
			}
			else
				write(1, buf, ret);
	}
	return ;
}

void	ft_term_write(void)
{
	char ch;

	while (read(STDIN_FILENO, &ch, 1) > 0)
		write(1, &ch, 1);
	return ;
}
