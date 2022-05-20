/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongcho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 17:54:41 by yongcho           #+#    #+#             */
/*   Updated: 2022/02/15 19:18:04 by yongcho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);

void	ft_putchar(char c)
{	
	write(1, &c, 1);
}

void	ft_putnumbs(char nb1, char nb2)
{
	ft_putchar(nb1 / 10 + '0');
	ft_putchar(nb1 % 10 + '0');
	ft_putchar(' ');
	ft_putchar(nb2 / 10 + '0');
	ft_putchar(nb2 % 10 + '0');
}

void	ft_print_comb2(void)
{
	char	nb1;
	char	nb2;

	nb1 = 0;
	nb2 = 0;
	while (nb1 <= 98)
	{
		while (nb2 <= 99)
		{
			if (nb1 < nb2)
			{
				ft_putnumbs(nb1, nb2);
				if (!(nb1 == 98 && nb2 == 99))
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
			nb2++;
		}
		nb2 = 0;
		nb1++;
	}
}
