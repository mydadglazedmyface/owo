# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: npongdon <npongdon@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/07 18:09:55 by npongdon          #+#    #+#              #
#    Updated: 2022/09/08 19:00:39 by npongdon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC		=	ft_strlen.c ft_strlcpy.c ft_strjoin.c

OBJ		=	$(SRC:.c=.o)

LIB		=	libft.a

all:	
			gcc -c -Wall -Wextra -Werror $(SRC)

clean:
			rm -f $(OBJ)
