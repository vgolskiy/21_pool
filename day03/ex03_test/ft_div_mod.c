/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskinner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 21:49:00 by mskinner          #+#    #+#             */
/*   Updated: 2020/02/28 21:51:52 by mskinner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
    int d;
    int m;

    d = a / b;
    m = a % b;
    *div = d;
    *mod = m;
    return ;
}

int		main()
{
    int a;
    int b;
    int d;
    int m;
    int *div;
    int *mod;

    a = 10;
    b = 3;
    div = &d;
    mod = &m;
    ft_div_mod(a, b, div, mod);
    printf("%d", a);
    printf("%d", b);
    printf("%d", d);
    printf("%d", m);
    return (0);
}
