/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskinner <mskinner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 21:02:10 by mskinner          #+#    #+#             */
/*   Updated: 2020/03/09 22:50:58 by mskinner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char ch)
{
	write(1, &ch, 1);
	return ;
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	return ;
}

void	ft_putnbr(int nbr)
{
	float tmp;

	tmp = nbr;
	
	if (nbr == -2147483648)
	{
		ft_putchar(45);
		ft_putchar(50);
		ft_putnbr(147483648);
	}
	else if (nbr < 0)
	{
		ft_putchar(45);
		ft_putnbr((-1) * nbr);
	}
	else
	{
		if (nbr >= 10)
			ft_putnbr(nbr / 10);
		ft_putchar((nbr % 10) + '0');
	}
	return ;
}

int		ft_atoi(char *str)
{
	int tmp;
	int i;
	int sign;

	tmp = 0;
	i = 0;
	sign = 1;
	if (00 == str)
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

int		ft_div(int n1, int n2)
{
	return(n1 / n2);
}

int		ft_mult(int n1, int n2)
{
	return (n1 * n2);
}

int		ft_add(int n1, int n2)
{
	return (n1 + n2);
}

int		ft_substr(int n1, int n2)
{
	return (n1 - n2);
}

int		ft_mod(int n1, int n2)
{
	return (n1 % n2);
}

int		ft_power(int nb, int power)
{
	int res;

	res = 1;
	if (power < 0)
	{
		return (0);
	}
	else if (power == 0)
	{
		return (res);
	}
		else while (power > 0)
		{
			res *= nb;
			ft_power(nb, --power);
		}
	return (res);
}

int		(*ft_oper(char *op))(int, int)
{
	if (op[1] == '\0')
	{
		if (op[0] == 47)
			return (&ft_div);
		else if (op[0] == 42)
			return (&ft_mult);
		else if (op[0] == 43)
			return (&ft_add);
		else if (op[0] == 45)
			return (&ft_substr);
		else if (op[0] == 37)
			return (&ft_mod);
		else if (op[0] == 94)
			return (&ft_power);
	}
	return (0);
}

int		ft_zero_print(char *op, int n)
{
	if ((op[0] == 47) && (n == 0))
	{
		ft_putstr("Stop : division by zero\n");
		return (1);
	}
	else if ((op[0] == 37) && (n == 0))
	{
		ft_putstr("Stop : modulo by zero\n");
		return (1);
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int		n1;
	int		n2;
	int		(*ft_func)(int, int);

	if ((argc < 4) || (argc > 4))
		return(0);
	n1 = ft_atoi(argv[1]);
	ft_func = ft_oper(argv[2]);
	n2 = ft_atoi(argv[3]);
	if (ft_zero_print(argv[2], n2))
		return (0);
	if (ft_func)
	{
		ft_putnbr(ft_func(n1, n2));
		ft_putchar('\n');
	}
	else
		ft_putstr("0\n");
	return (0);
}