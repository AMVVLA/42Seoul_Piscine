/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongcho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 13:39:00 by yongcho           #+#    #+#             */
/*   Updated: 2022/02/15 17:51:57 by yongcho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str, int n)
{
	int	i;

	i = 0;
	while (i <= n)
	{
		ft_putchar(str[i] + '0');
		i++;
	}
	if (str[0] != 9 - n)
		write(1, ", ", 2);
}

void	DFS(char *arr2, int n, int cnt)
{
	if (cnt == n - 1)
	{
		while (arr2[cnt] <= 9)
		{
			ft_putstr(arr2, cnt);
			arr2[cnt]++;
		}
		return ;
	}
	while (arr2[cnt] <= 10 - n + cnt)
	{	
		arr2[cnt + 1] = arr2[cnt] + 1;
		DFS(arr2, n, cnt + 1);
		arr2[cnt]++;
	}
}

void	ft_print_combn(int n)
{
	char	arr[10];
	char	*arr2;
	int		cnt;

	arr[0] = 0;
	arr2 = arr;
	cnt = 0;
	DFS(arr2, n, cnt);
}
