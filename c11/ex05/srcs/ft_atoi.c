/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongcho <yongcho@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 17:42:28 by yongcho           #+#    #+#             */
/*   Updated: 2022/02/12 18:24:00 by yongcho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	flag;
	int	ans;

	flag = 0;
	ans = 0;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			flag++;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		ans = ans * 10 + (*str - '0');
		str++;
	}
	if (flag % 2 == 0)
		return (ans);
	else
		return (-ans);
}
