/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskinner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 16:46:31 by mskinner          #+#    #+#             */
/*   Updated: 2020/03/07 11:37:09 by mskinner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_print(int hour, int hour2, char s1, char s2)
{
	printf("THE FOLLOWING TAKES PLACE BETWEEN %d"
	".00 %c"
	".M. AND %d"
	".00 %c"
	".M.\n"
	, hour, s1, hour2, s2);
	return ;
}

void	ft_takes_place(int hour)
{
	if ((hour > 0) && (hour < 11))
		ft_print(hour, hour + 1, 'A', 'A');
	else if ((hour > 12) && (hour < 23))
		ft_print(hour - 12, hour - 11, 'P', 'P');
	else if (hour == 11)
		ft_print(hour, hour + 1, 'A', 'P');
	else if (hour == 12)
		ft_print(hour, 1, 'P', 'P');
	else if (hour == 23)
		ft_print(hour - 12, 12, 'P', 'A');
	else if ((hour == 0) || (hour == 24))
		ft_print(12, 1, 'A', 'A');
}

int main(void)
{
	int a;
	scanf("%d", &a);
	ft_takes_place(a);
	return (0);
}
