# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ijaber-a <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/14 17:10:35 by ijaber-a          #+#    #+#              #
#    Updated: 2020/12/14 17:11:46 by ijaber-a         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS  =  -Wall -Wextra -Werror

default: bsq

bsq: *.c
	$(CC) $(CFLAGS) -o bsq *.c


fclean:
	$(RM) bsq *.o *.gch *.out
	make default
