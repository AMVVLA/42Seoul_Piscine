# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yongcho <yongcho@student.42seoul.k>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/21 19:01:26 by yongcho           #+#    #+#              #
#    Updated: 2022/02/21 19:12:50 by yongcho          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash

gcc -Wall -Wextra -Werror -c ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
ar -rcs libft.a *.o
