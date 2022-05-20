/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongcho <yongcho@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 12:43:13 by yongcho           #+#    #+#             */
/*   Updated: 2022/02/14 12:47:17 by yongcho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	while (argc - 1 > 0)
	{
		while (*argv[argc - 1])
			write(1, argv[argc - 1]++, 1);
		write(1, "\n", 1);
		argc--;
	}
}
