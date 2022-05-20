/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongcho <yongcho@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 17:42:23 by yongcho           #+#    #+#             */
/*   Updated: 2022/02/13 21:25:04 by yongcho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int len, long nb, char *base)
{
	if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(len, -nb, base);
	}
	else if (nb >= 0 && nb < len)
		ft_putchar(base[nb % len]);
	else if (nb >= len)
	{
		ft_putnbr(len, nb / len, base);
		ft_putnbr(len, nb % len, base);
	}
}	

int	ft_chk_base(char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (1);
		i++;
	}
	if (i <= 1)
		return (1);
	return (0);
}

int	ft_chk_base2(char *base)
{
	int	i;
	int	j;
	int	cmp;

	i = 0;
	while (base[i])
	{
		cmp = base[i];
		j = i;
		while (base[j + 1])
		{
			if (base[j + 1] == cmp)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	len;

	len = 0;
	if (ft_chk_base(base) == 1)
		return ;
	else if (ft_chk_base2(base) == 1)
		return ;
	else
	{
		while (base[len])
			len++;
		ft_putnbr(len, nbr, base);
	}
}
