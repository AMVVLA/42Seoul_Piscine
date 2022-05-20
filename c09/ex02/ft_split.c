/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongcho <yongcho@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 17:46:16 by yongcho           #+#    #+#             */
/*   Updated: 2022/02/22 17:46:23 by yongcho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_malloc(char *str, int start, int end)
{
	int		tmp;
	char	*ptr;

	ptr = malloc(end - start + 1);
	tmp = 0;
	while (start < end)
	{
		ptr[tmp] = str[start];
		tmp++;
		start++;
	}
	ptr[tmp] = 0;
	return (ptr);
}

int	ft_end(char *str, char *charset, int start)
{
	int	i;
	int	j;
	int	flag;

	i = 0;
	while (str[start + i])
	{
		flag = 0;
		j = 0;
		while (charset[j])
		{
			if (str[start + i] == charset[j])
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
	return (start + i);
}

int	ft_start(char *str, char *charset, int end)
{
	int	i;
	int	j;
	int	flag;

	i = 0;
	while (str[end + i])
	{
		flag = 0;
		j = 0;
		while (charset[j])
		{
			if (str[end + i] == charset[j])
			{
				flag = 1;
				break ;
			}
			j++;
		}
		if (flag == 0)
			break ;
		i++;
	}
	return (end + i);
}

int	split_nb(char *str, char *charset)
{
	int	nb;
	int	start;
	int	end;

	nb = 0;
	end = 0;
	start = ft_start(str, charset, 0);
	while (str[start])
	{
		end = ft_end(str, charset, start);
		start = ft_start(str, charset, end);
		nb += 1;
	}
	return (nb);
}

char	**ft_split(char *str, char *charset)
{
	int		start;
	int		end;
	int		arr_idx;
	char	**ans;

	end = 0;
	arr_idx = 0;
	ans = malloc(sizeof(char *) * (split_nb(str, charset) + 1));
	start = ft_start(str, charset, 0);
	while (arr_idx < split_nb(str, charset))
	{
		end = ft_end(str, charset, start);
		ans[arr_idx++] = ft_malloc(str, start, end);
		start = ft_start(str, charset, end);
	}
	ans[arr_idx] = 0;
	return (ans);
}
