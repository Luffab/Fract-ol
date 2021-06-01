# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: luffab <luffab@student.42lyon.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/15 16:35:14 by dpuccion          #+#    #+#              #
#    Updated: 2021/06/01 16:33:39 by luffab           ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #


NAME 	= 	libft.a

HEADER	=	libft

SRCS	=	ft_atoi.c				\
			ft_bzero.c				\
			ft_isalnum.c			\
			ft_isalpha.c			\
			ft_isascii.c			\
			ft_isdigit.c			\
			ft_isprint.c			\
			ft_memcpy.c				\
			ft_memset.c				\
			ft_strchr.c				\
			ft_strrchr.c			\
			ft_strlen.c				\
			ft_strncmp.c			\
			ft_strnstr.c			\
			ft_tolower.c			\
			ft_toupper.c			\
			ft_memccpy.c			\
			ft_memmove.c			\
			ft_memchr.c				\
			ft_memcmp.c				\
			ft_calloc.c				\
			ft_strdup.c				\
			ft_strjoin.c			\
			ft_strlcpy.c			\
			ft_strlcat.c			\
			ft_strtrim.c			\
			ft_substr.c				\
			ft_itoa.c				\
			ft_putchar_fd.c			\
			ft_putstr_fd.c			\
			ft_putnbr_fd.c			\
			ft_putendl_fd.c			\
			ft_strmapi.c			\
			ft_split.c				\

SRCSB =		ft_lstnew_bonus.c		\
			ft_lstadd_front_bonus.c	\
			ft_lstsize_bonus.c		\
			ft_lstlast_bonus.c		\
			ft_lstadd_back_bonus.c	\
			ft_lstdelone_bonus.c	\
			ft_lstclear_bonus.c		\
			ft_lstiter_bonus.c		\
			ft_lstmap_bonus.c		\


OBJS	=   $(SRCS:.c=.o)

OBJSB	=	$(SRCSB:.c=.o)

all     :   $(NAME)

$(NAME) :   $(OBJS)
	ar rcs $(NAME) $(OBJS)

bonus	:	$(OBJSB) $(OBJS)
	ar rcs $(NAME) $(OBJSB) $(OBJS)

%.o: %.c $(HEADER)
	gcc -Wall -Werror -Wextra -c $< -o $@ -I $(HEADER)

clean   :
	/bin/rm -f $(OBJS) $(OBJSB)

fclean  :   clean   
	/bin/rm -f $(NAME)

re      :   fclean all
