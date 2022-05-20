/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongcho <yongcho@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 21:23:51 by yongcho           #+#    #+#             */
/*   Updated: 2022/02/15 19:31:22 by yongcho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	ans;

	ans = 1;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	while (power != 0)
	{
		ans = ans * nb;
		power--;
	}
	return (ans);
}
