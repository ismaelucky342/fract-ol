<<<<<<< HEAD
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/12 18:51:02 by ismherna          #+#    #+#              #
#    Updated: 2024/04/12 18:56:42 by ismherna         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

=======
>>>>>>> af345d2c3af1a00d266c0fc367bee43d6525f67f
NAME = fractol

SRC_DIR = src
INC_DIR = includes

SRCS = $(SRC_DIR)/main.c\
       $(SRC_DIR)/colors.c\
       $(SRC_DIR)/defaults.c\
       $(SRC_DIR)/keys.c\
       $(SRC_DIR)/presets.c\
       $(SRC_DIR)/palette.c\
       $(SRC_DIR)/mlx.c\
       $(SRC_DIR)/hooks.c\
       $(SRC_DIR)/mandelbrot.c\
       $(SRC_DIR)/julia.c\
       $(SRC_DIR)/parse.c

OBJS = $(SRCS:.c=.o)

LIBFT = libft
LIBFT_LIB = $(LIBFT)/libft.a

MLX = mlx
MLX_LIB = $(MLX)/libmlx.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror -I$(INC_DIR) -Imlx
MINILIBX = -Imlx -lmlx -framework OpenGL -framework AppKit

LDFLAGS = -fsanitize=address

all: $(NAME)

$(NAME): $(LIBFT_LIB) $(MLX_LIB) $(OBJS)
<<<<<<< HEAD
	@$(CC) $(CFLAGS) $(OBJS) -L$(LIBFT) -L$(MLX) -lft $(MINILIBX) -o $(NAME)
	@echo "\033[0;36mCompilation of $(NAME) completed!\033[0m"
=======
	@$(CC) $(CFLAGS) $(OBJS) -L$(LIBFT) -L$(MLX) -lft $(MINILIBX) -o $(NAME) >/dev/null 2>&1
	@echo "	  ██████  ██▓    ▓█████   ▄████  ▄▄▄       ██▀███   ██▓  ██████ "
	@echo "	▒██    ▒ ▓██▒    ▓█   ▀  ██▒ ▀█▒▒████▄    ▓██ ▒ ██▒▓██▒▒██    ▒ "
	@echo "	░ ▓██▄   ▒██░    ▒███   ▒██░▄▄▄░▒██  ▀█▄  ▓██ ░▄█ ▒▒██▒░ ▓██▄   "
	@echo "	  ▒   ██▒▒██░    ▒▓█  ▄ ░▓█  ██▓░██▄▄▄▄██ ▒██▀▀█▄  ░██░  ▒   ██▒"
	@echo "	▒██████▒▒░██████▒░▒████▒░▒▓███▀▒ ▓█   ▓██▒░██▓ ▒██▒░██░▒██████▒▒"
	@echo "	▒ ▒▓▒ ▒ ░░ ▒░▓  ░░░ ▒░ ░ ░▒   ▒  ▒▒   ▓▒█░░ ▒▓ ░▒▓░░▓  ▒ ▒▓▒ ▒ ░"
	@echo "	░ ░▒  ░ ░░ ░ ▒  ░ ░ ░  ░  ░   ░   ▒   ▒▒ ░  ░▒ ░ ▒░ ▒ ░░ ░▒  ░ ░"
	@echo "	░  ░  ░    ░ ░      ░   ░ ░   ░   ░   ▒     ░░   ░  ▒ ░░  ░  ░  "
	@echo "		  ░      ░  ░   ░  ░      ░       ░  ░   ░      ░        ░  "
	@echo "			\033[0;36mCompilation of $(NAME) completed!\033[0m"
>>>>>>> af345d2c3af1a00d266c0fc367bee43d6525f67f

$(LIBFT_LIB):
	@echo "Compiling Libft..."
	@make -C $(LIBFT)
	@echo "\033[0;32mLibft compilation complete.\033[0m"

$(MLX_LIB):
	@echo "Compiling minilibx..."
	@make -C $(MLX)
	@echo "\033[0;32mMinilibx compilation complete.\033[0m"

.c.o:
	@$(CC) $(CFLAGS) -c $< -o $@

norm:
	@norminette $(SRCS) $(INC_DIR)

clean:
	@make -C $(LIBFT) clean
	@make -C $(MLX) clean
	@rm -f $(OBJS)
	@echo "\033[0;33mObject files removed.\033[0m"

fclean: clean
	@make -C $(LIBFT) fclean
	@rm -f $(NAME)
	@echo "\033[0;33mExecutable removed.\033[0m"

re: fclean all

asan: CC += $(LDFLAGS)
asan: CFLAGS += -g3
asan: re

<<<<<<< HEAD
.PHONY: all clean fclean re asan norm
=======
.PHONY: all clean fclean re asan
>>>>>>> af345d2c3af1a00d266c0fc367bee43d6525f67f
