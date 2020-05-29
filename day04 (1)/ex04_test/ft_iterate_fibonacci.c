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
	int mas[index];
	int i;

	if (index < 0)
		return (-1);
	else
		mas[0] = 0;
   		mas[1] = 1;
		if (index > 1)
		{
			i = 2;
			while (i <= index)
			{
				mas[i] = mas[i - 1] + mas[i - 2];
				i++;
			}
		}
	return (mas[index]);
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