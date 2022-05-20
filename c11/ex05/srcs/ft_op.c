/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_libop.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongcho <yongcho@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 18:41:42 by yongcho           #+#    #+#             */
/*   Updated: 2022/02/23 20:16:25 by yongcho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_chk_op(char *c)
{
	int	i;

	i = 0;
	while (c[i])
		i++;
	if (!(*c == '+' || *c == '-' || *c == '/' || *c == '*' || *c == '%')
		|| i != 1)
		return (0);
	return (1);
}

int	ft_op(char *op, int a, int b)
{
	int	(*fp)(int, int);

	if (*op == '+')
		fp = add;
	else if (*op == '-')
		fp = sub;
	else if (*op == '*')
		fp = mul;
	else if (*op == '/')
		fp = div;
	else
		fp = mod;
	return (fp(a, b));
}
