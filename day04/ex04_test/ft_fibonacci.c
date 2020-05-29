/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskinner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 16:28:35 by mskinner          #+#    #+#             */
/*   Updated: 2020/02/29 17:00:02 by mskinner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
		else
			return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

int		main()
{
	int n;
	
	printf("Enter an index: ");
	scanf("%d", &n);
	n = ft_fibonacci(n);
	printf("\nResult: ");
	printf("%d", n);
	return (0);	
}