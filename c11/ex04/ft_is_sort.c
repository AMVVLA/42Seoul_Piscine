/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongcho <yongcho@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 17:52:08 by yongcho           #+#    #+#             */
/*   Updated: 2022/02/23 18:06:59 by yongcho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_chkdsc(int *tab, int length, int(*f)(int, int))
{
	int	i;
	int	j;

	i = 0;
	while (i < length - 1)
	{
		j = i + 1;
		while (j < length)
		{
			if (f(tab[i], tab[j]) < 0)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int	i;
	int	j;
	int	flag;

	flag = 0;
	i = 0;
	while (i < length - 1)
	{
		j = i + 1;
		while (j < length)
		{
			if (f(tab[i], tab[j]) > 0)
			{
				flag = 1;
				break ;
			}
			j++;
		}
		if (flag == 1)
			break ;
		i++;
	}
	if (flag)
		return (ft_chkdsc(tab, length, *f));
	return (1);
}
