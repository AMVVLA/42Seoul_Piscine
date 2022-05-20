/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongcho <yongcho@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 18:15:34 by yongcho           #+#    #+#             */
/*   Updated: 2022/02/23 20:11:05 by yongcho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	main(int ac, char **argv)
{
	if (ac == 4)
	{
		if (!ft_chk_op(argv[2]))
			write(1, "0\n", 2);
		else if (*argv[2] == '/' && ft_atoi(argv[3]) == 0)
			write(1, "Stop : division by zero\n", 24);
		else if (*argv[2] == '%' && ft_atoi(argv[3]) == 0)
			write(1, "Stop : modulo by zero\n", 22);
		else
		{	
			ft_putnbr(ft_op(argv[2], ft_atoi(argv[1]), ft_atoi(argv[3])));
			ft_putchar('\n');
		}
	}
	return (0);
}
