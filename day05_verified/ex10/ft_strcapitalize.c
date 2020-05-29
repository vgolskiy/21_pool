/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskinner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 19:23:01 by mskinner          #+#    #+#             */
/*   Updated: 2020/03/03 19:27:59 by mskinner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_alphanumeric(char ch)
{
	if (((ch >= 97) && (ch <= 122)) ||
		((ch >= 65) && (ch <= 90)) ||
		((ch >= 48) && (ch <= 57)))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;
	int m;

	i = 1;
	m = 0;
	if ((str[0] != '\0') && (str[0] >= 97) && (str[0] <= 122))
		str[0] -= 32;
	while (str[i] != '\0')
	{
		if (!ft_alphanumeric(str[i - 1]) && (str[i] >= 97) && (str[i] <= 122))
			str[i] -= 32;
		else if ((str[i] >= 65) && (str[i] <= 90))
			str[i] += 32;
		i++;
	}
	return (str);
}
