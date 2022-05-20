/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongcho <yongcho@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 10:58:30 by yongcho           #+#    #+#             */
/*   Updated: 2022/02/19 15:23:45 by yongcho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_stock_str.h" 
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*ptr;
	char	*str;
	int		len;

	len = 0;
	while (src[len])
		len++;
	str = malloc(len + 1);
	ptr = str;
	while (*src)
		*ptr++ = *src++;
	*ptr = '\0';
	return (str);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*point;

	i = 0;
	point = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!point)
		return (0);
	while (i < ac)
	{
		point[i].size = ft_strlen(av[i]);
		point[i].str = ft_strdup(av[i]);
		point[i].copy = ft_strdup(point[i].str);
		if (point[i].str == 0 || point[i].copy == 0)
			return (0);
		i++;
	}
	point[i].str = 0;
	return (point);
}
