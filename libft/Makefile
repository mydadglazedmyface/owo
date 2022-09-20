# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: npongdon <npongdon@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/07 18:09:55 by npongdon          #+#    #+#              #
#    Updated: 2022/09/17 16:29:30 by npongdon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

CC		=	gcc -c
CFLAGS	=	-Wall -Wextra -Werror -I.

SRC		=	ft_atoi.c     ft_isascii.c  ft_memcmp.c      ft_putendl_fd.c  ft_strdup.c    ft_strlen.c   ft_strtrim.c \
			ft_bzero.c    ft_isdigit.c  ft_memcpy.c      ft_putnbr_fd.c   ft_striteri.c  ft_strmapi.c  ft_substr.c \
			ft_calloc.c   ft_isprint.c  ft_memmove.c     ft_putstr_fd.c   ft_strjoin.c   ft_strncmp.c  ft_tolower.c \
			ft_isalnum.c  ft_itoa.c     ft_memset.c      ft_split.c       ft_strlcat.c   ft_strnstr.c  ft_toupper.c \
			ft_isalpha.c  ft_memchr.c   ft_putchar_fd.c  ft_strchr.c      ft_strlcpy.c   ft_strrchr.c 

OBJ		=	$(SRC:.c=.o)

B_SRC	=	ft_lstadd_back.c   ft_lstclear.c   ft_lstiter.c  ft_lstmap.c  ft_lstsize.c \
			ft_lstadd_front.c  ft_lstdelone.c  ft_lstlast.c  ft_lstnew.c

B_OBJ	=	$(B_SRC:.c=.o)

$(NAME):
			$(CC) $(CFLAGS) $(SRC)
			ar -rcs $(NAME) $(OBJ)

all: $(NAME)

bonus:
			$(CC) $(CFLAGS) $(SRC) $(B_SRC)
			ar -rcs $(NAME) $(OBJ) $(B_OBJ)

clean:
			rm -f $(OBJ) $(B_OBJ)

fclean: clean
			rm -f $(NAME)

re: fclean all

.PHONY:		all clean fclean re
