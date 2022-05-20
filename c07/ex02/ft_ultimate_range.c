/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongcho <yongcho@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 15:46:44 by yongcho           #+#    #+#             */
/*   Updated: 2022/02/19 18:04:42 by yongcho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*ptr;
	int	*arr;
	int	ans;

	if (max <= min)
	{	
		*range = 0;
		return (0);
	}
	ans = max - min;
	arr = malloc(sizeof(int) * (ans));
	if (!arr)
		return (-1);
	ptr = arr;
	while (min < max)
		*ptr++ = min++;
	*range = arr;
	return (ans);
}
