/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongcho <yongcho@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 16:52:31 by yongcho           #+#    #+#             */
/*   Updated: 2022/02/13 17:10:30 by yongcho          ###   ########.fr       */
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
	return (i);
}

int	ft_is_prime(int nb)
{
	int	i;
	int	sqrtnb;

	i = 2;
	sqrtnb = ft_sqrt(nb);
	if (nb == 0 || nb == 1)
		return (0);
	else if (nb == 2)
		return (1);
	else if (nb < 0)
		return (0);
	while (i <= sqrtnb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb) && nb < 2147483647)
		nb++;
	return (nb);
}
