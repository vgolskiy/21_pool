/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskinner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 22:30:23 by mskinner          #+#    #+#             */
/*   Updated: 2020/02/28 22:39:44 by mskinner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return i;
}

void	ft_strrev(char *str)
{
	int i;
	int n;
	char *rev;

	i = 1; 
	rev = "";
	n = ft_strlen(str);
	while (i <= n)
	{
		rev = rev + str[n - i];
		i++;
	}
	*str = *rev;
	return ;
}

int		main()
{
	char *str;
	int n;
	char* ch = "abcd";

	//str = "abcd";
	str = ch;
	ft_strrev(str);
	printf("%s", str);
	return (0);
}