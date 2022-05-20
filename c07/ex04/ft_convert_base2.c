/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongcho <yongcho@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 20:47:16 by yongcho           #+#    #+#             */
/*   Updated: 2022/02/20 19:18:24 by yongcho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi2(char *str, char *base, int len);

int	ft_atoi(char *str, char *base, int len)
{
	int	flag;
	int	ans;
	int	i;

	flag = 0;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			flag++;
		i++;
	}
	ans = ft_atoi2(&str[i], base, len);
	if (flag % 2 == 0)
		return (ans);
	else
		return (-ans);
}

int	ft_atoi2(char *str, char *base, int len)
{
	int	flag2;
	int	i;
	int	ans;

	ans = 0;
	flag2 = 1;
	while (*str)
	{
		flag2 = 1;
		i = 0;
		while (base[i])
		{
			if (*str == base[i])
			{
				ans = ans * len + i;
				flag2 = 0;
				break ;
			}
			i++;
		}
		if (flag2 == 1)
			break ;
		str++;
	}
	return (ans);
}

int	ft_atoi_base(char *nbr, char *base_from)
{
	int	ans;
	int	len;

	len = 0;
	while (base_from[len])
		len++;
	ans = ft_atoi(nbr, base_from, len);
	return (ans);
}
