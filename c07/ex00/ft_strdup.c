/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongcho <yongcho@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 14:21:41 by yongcho           #+#    #+#             */
/*   Updated: 2022/02/16 16:56:47 by yongcho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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
