/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongcho <yongcho@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 17:09:59 by yongcho           #+#    #+#             */
/*   Updated: 2022/02/16 18:16:41 by yongcho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	chk_strlen(int size, char **strs)
{
	int	i;
	int	j;
	int	str_len;

	str_len = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			j++;
			str_len++;
		}
		i++;
	}
	return (str_len);
}

void	str_to_ptr(int size, char *ptr, char **strs, char *sep)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			*ptr++ = strs[i][j++];
		j = 0;
		if (size - 1 != i)
		{
			while (sep[j])
				*ptr++ = sep[j++];
		}
		i++;
	}
	*ptr = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		sep_len;
	int		str_len;
	char	*ptr;
	char	*arr;

	sep_len = 0;
	str_len = chk_strlen(size, strs);
	while (sep[sep_len])
		sep_len++;
	if (size == 0)
		arr = malloc(0);
	else if (size < 0)
		return (0);
	else
		arr = malloc(str_len + (sep_len * (size - 1)) + 1);
	if (!arr)
		return (0);
	ptr = arr;
	str_to_ptr(size, ptr, strs, sep);
	return (arr);
}
