NAME = fractol

SRCS =	srcs/main.c \
		srcs/mandelbrot.c \
		srcs/fractol.c \
		srcs/colors.c \
		
FLAGS = -Wall -Wextra -Werror -g2

HEADER_FILE = ./include

HEADERS =	$(HEADER_FILE)/fractol.h \
			libft/libft.h

LIB_NAME = libft/libft.a

MLX_NAME = mlx/libmlx.a

OBJS = ${SRCS:.c=.o}

.PHONY: all
.PHONY: clean
.PHONY: fclean
.PHONY: re

$(NAME): $(OBJS) $(LIB_NAME) $(MLX_NAME)
	clang $(OBJS) $(LIB_NAME) $(MLX_NAME) -o $(NAME) -lmlx -lm -lbsd -lX11 -lXext

$(OBJS): %.o: %.c $(HEADERS)
	clang $(FLAGS) -I$(HEADER_FILE) -c $< -o $@

$(LIB_NAME):
	$(MAKE) -C libft

$(MLX_NAME):
	$(MAKE) -C mlx

all: $(NAME)

clean:
	rm -f $(OBJS)
	$(MAKE) -C mlx clean
	$(MAKE) -C libft clean

fclean: clean
	rm -f $(NAME)
	rm $(MLX_NAME)

re: fclean all