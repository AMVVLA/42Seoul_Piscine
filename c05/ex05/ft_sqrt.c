/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongcho <yongcho@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 13:14:39 by yongcho           #+#    #+#             */
/*   Updated: 2022/02/13 15:33:20 by yongcho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb == 0)
		return (0);
	else if (nb == 1)
		return (1);
	while ((i < (nb / 2) + 1) && (i < 46342))
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
