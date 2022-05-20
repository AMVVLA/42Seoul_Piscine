/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongcho <yongcho@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 13:34:47 by yongcho           #+#    #+#             */
/*   Updated: 2022/02/13 21:03:25 by yongcho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi2(char *str, char *base, int len);

int	ft_atoi(char *str, char *base, int len)
{
	int	flag;
	int	ans;
	int	i;
	int	j;

	flag = 0;
	i = 0;
	j = 0;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			flag++;
		str++;
	}
	ans = ft_atoi2(str, base, len);
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

int	ft_chk_base3(char *base)
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

int	ft_chk_base4(char *base)
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

int	ft_atoi_base(char *str, char *base)
{
	int	ans;
	int	len;

	len = 0;
	if (ft_chk_base3(base) == 1)
		return (0);
	if (ft_chk_base4(base) == 1)
		return (0);
	while (base[len])
		len++;
	ans = ft_atoi(str, base, len);
	return (ans);
}
