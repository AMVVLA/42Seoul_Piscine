/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongcho <yongcho@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 13:49:18 by yongcho           #+#    #+#             */
/*   Updated: 2022/02/12 17:24:53 by yongcho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dst_len;
	unsigned int	src_len;
	unsigned int	i;
	unsigned int	j;

	dst_len = 0;
	src_len = 0;
	i = 0;
	j = 0;
	while (dest[dst_len])
		dst_len++;
	while (src[src_len])
		src_len++;
	if (size <= dst_len)
		return (src_len + size);
	while (src[j] && (size - 1 > j + dst_len))
	{
		dest[dst_len + j] = src[j];
		j++;
	}
	dest[dst_len + j] = '\0';
	return (src_len + dst_len);
}
