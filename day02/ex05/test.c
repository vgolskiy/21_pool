/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskinner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 20:48:32 by mskinner          #+#    #+#             */
/*   Updated: 2020/02/27 20:49:08 by mskinner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putchar.c"

void	print_symbols(void)
{	
	char sp;
	char com;

	sp = 32;
	com = 44;	
	ft_putchar(com);
	ft_putchar(sp);
	return ;
}

int main()
{
    char i;
	char j;

	i = 48;
    j = 48;
  //  while (tmp_i <= )
	while (i <= 57)
    {
        while (j <= 57)
        {
            ft_putchar(i);
            ft_putchar(j);
            print_symbols();
            j++;
        }
        i++;
    }
}
