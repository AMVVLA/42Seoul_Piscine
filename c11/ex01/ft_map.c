/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongcho <yongcho@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 17:34:54 by yongcho           #+#    #+#             */
/*   Updated: 2022/02/23 17:48:52 by yongcho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int(*f)(int))
{
	int	*ptr;
	int	i;

	i = 0;
	ptr = (int *)malloc(sizeof(int) * length);
	if (!ptr || length < 1)
		return (0);
	while (i < length)
	{
		ptr[i] = f(tab[i]);
		i++;
	}
	return (ptr);
}
