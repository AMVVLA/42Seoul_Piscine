/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongcho <yongcho@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 18:12:57 by yongcho           #+#    #+#             */
/*   Updated: 2022/02/23 18:43:43 by yongcho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>

void	ft_putnbr(int nb);
void	ft_putchar(char c);
int		ft_atoi(char *str);
int		ft_chk_op(char *c);
int		add(int a, int b);
int		sub(int a, int b);
int		mul(int a, int b);
int		div(int a, int b);
int		mod(int a, int b);
int		ft_op(char *op, int a, int b);

#endif
