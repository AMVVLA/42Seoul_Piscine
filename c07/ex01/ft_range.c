/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongcho <yongcho@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 14:27:44 by yongcho           #+#    #+#             */
/*   Updated: 2022/02/20 18:33:55 by yongcho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	*ptr;

	if (max <= min)
		return (0);
	arr = malloc(sizeof(int) * (max - min));
	if (!arr)
		return (0);
	ptr = arr;
	while (min < max)
		*ptr++ = min++;
	return (arr);
}
