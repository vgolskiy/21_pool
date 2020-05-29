/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskinner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 16:38:56 by mskinner          #+#    #+#             */
/*   Updated: 2020/03/03 16:52:26 by mskinner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	int diff;

	i = 0;
	diff = 0;
	while (((s1[i] != '\0') && (s2[i] != '\0')) &&
	(i < n))
	{
		if (s1[i] != s2[i])
			diff = 1;
		i++;
	}
	if ((i == n) &&
	((s1[i] != '\0') || (s2[i] != '\0')))
		i--;
	if (s1[i] > s2[i])
		return (s1[i]);
	else if (s1[i] < s2[i])
		return (-1 * s2[i]);
	else if (diff)
		return (-1);
	else
		return (0);
}
