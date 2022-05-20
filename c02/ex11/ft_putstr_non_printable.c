/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongcho <yongcho@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 18:23:08 by yongcho           #+#    #+#             */
/*   Updated: 2022/02/09 19:19:11 by yongcho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char	c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	char	*hex;

	hex = "0123456789abcdef";
	while (*str)
	{
		if ((unsigned char)*str < 32 || (unsigned char)*str > 126)
		{
			ft_putchar('\\');
			ft_putchar(hex[(unsigned char)*str / 16]);
			ft_putchar(hex[(unsigned char)*str % 16]);
			str++;
			continue ;
		}
		ft_putchar((unsigned char)*str);
		str++;
	}
}
