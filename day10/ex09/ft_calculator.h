/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calculator.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskinner <mskinner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 23:02:48 by mskinner          #+#    #+#             */
/*   Updated: 2020/03/10 19:05:18 by mskinner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CALCULATOR_H
# define FT_CALCULATOR_H

void	ft_div(int n1, int n2);
void	ft_mul(int n1, int n2);
void	ft_add(int n1, int n2);
void	ft_sub(int n1, int n2);
void	ft_mod(int n1, int n2);

void	ft_putchar(char ch);
void	ft_putstr(char *str);
void	ft_putnbr(int nbr);
int		ft_atoi(char *str);
void	ft_usage(int n1, int n2);
int		ft_strcmp(char *s1, char *s2);

#endif
