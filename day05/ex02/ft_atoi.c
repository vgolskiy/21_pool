/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskinner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 11:58:35 by mskinner          #+#    #+#             */
/*   Updated: 2020/03/02 11:58:39 by mskinner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int tmp;
	int i;
	int sign;

	tmp = 0;
	i = 0;
	sign = 1;
	if (str == NULL)
		return (0);
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] == '\t' || str[i] == '\v' || str[i] == '\f' ||
		str[i] == '\n' || str[i] == ' ' || str[i] == '\r')
		i++;
	while (str[i] != '\0')
	{
		if (str[i] >= 48 && str[i] <= 57)
			tmp = tmp * 10 + str[i] - '0';
		else
			break ;
		i++;
	}
	return (sign * tmp);
}
