/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongcho <yongcho@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 20:47:00 by yongcho           #+#    #+#             */
/*   Updated: 2022/02/22 17:07:42 by yongcho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
int	ft_atoi_base(char *nbr, char *base_from);

long long	ft_power(int len, long long nb)
{
	long long	tmp;

	tmp = 1;
	while (nb / len > 0)
	{
		tmp *= len;
		nb = nb / len;
	}
	return (tmp);
}

char	*ft_putnbr(int len, long long nb, char *base, int arr_len)
{
	char		*arr;
	long long	tmp;
	int			i;

	i = 0;
	tmp = 0;
	arr = malloc(arr_len);
	if (!arr)
		return (0);
	if (nb < 0)
	{
		arr[i++] = '-';
		nb = -nb;
	}
	tmp = ft_power(len, nb);
	while (tmp != 0)
	{
		arr[i] = base[nb / tmp];
		nb = nb % tmp;
		tmp = tmp / len;
		i++;
	}
	arr[i] = 0;
	return (arr);
}	

int	ft_chk_base(char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-'
			|| (base[i] >= 9 && base[i] <= 13) || base[i] == ' ')
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
		j = i + 1;
		while (base[j])
		{
			if (base[j] == cmp)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		nb;
	int		nb2;
	int		len;
	int		nb_len;
	int		arr_len;

	len = 0;
	nb_len = 1;
	if (ft_chk_base(base_from) == 1 || ft_chk_base2(base_from) == 1
		|| ft_chk_base(base_to) == 1 || ft_chk_base2(base_to) == 1)
		return (0);
	nb = ft_atoi_base(nbr, base_from);
	nb2 = nb;
	while (base_to[len])
		len++;
	while (nb2 / len)
	{
		nb_len++;
		nb2 = nb2 / len;
	}
	arr_len = nb_len + 1 + (nb < 0);
	return (ft_putnbr(len, nb, base_to, arr_len));
}
