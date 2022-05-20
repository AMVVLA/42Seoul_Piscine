/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongcho <yongcho@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 17:13:56 by yongcho           #+#    #+#             */
/*   Updated: 2022/02/16 15:42:22 by yongcho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);
void	ft_DFS(int nb, char *cols, int *ans);
int		ft_ten_queens_puzzle(void);
int		is_promising(int nb, char *cols);
int		ft_abs(int n);

int	ft_ten_queens_puzzle(void)
{
	char	cols[10];
	int		ans;

	ans = 0;
	ft_DFS(0, cols, &ans);
	return (ans);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-n);
}

int	is_promising(int nb, char *cols)
{
	int	i;

	i = 0;
	while (i < nb)
	{
		if (cols[i] == cols[nb] || ft_abs(i - nb) == ft_abs(cols[i] - cols[nb]))
			return (0);
		i++;
	}
	return (1);
}

void	ft_DFS(int nb, char *cols, int *ans)
{
	int	row;
	int	i;

	row = 0;
	if (nb == 10)
	{
		i = 0;
		while (i < 10)
		{
			ft_putchar(cols[i] + '0');
			i++;
		}
		write(1, "\n", 1);
		*ans += 1;
		return ;
	}
	while (row <= 9)
	{
		cols[nb] = row;
		if (is_promising(nb, cols))
			ft_DFS(nb + 1, cols, ans);
		row++;
	}
}
