# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: npongdon <npongdon@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/07 18:09:55 by npongdon          #+#    #+#              #
#    Updated: 2022/09/08 21:36:03 by npongdon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC		=	ft_atoi.c ft_isascii.c ft_memcpy.c ft_strjoin.c ft_strnstr.c \
			ft_bzero.c ft_isdigit.c ft_memmove.c ft_strlcat.c ft_strrchr.c \
			ft_calloc.c ft_isprint.c ft_memset.c ft_strlcpy.c ft_substr.c \
			ft_isalnum.c ft_memchr.c ft_strchr.c ft_strlen.c ft_tolower.c \
			ft_isalpha.c ft_memcmp.c ft_strdup.c ft_strncmp.c ft_toupper.c \
			ft_strtrim.c

OBJ		=	$(SRC:.c=.o)

LIB		=	libft.a

comp:	
			gcc -c -Wall -Wextra -Werror $(SRC)

all:	comp
			ar rc $(LIB) $(OBJ)

clean:
			rm -f $(OBJ)
