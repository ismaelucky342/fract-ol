# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/24 13:02:25 by ismherna          #+#    #+#              #
#    Updated: 2024/05/01 10:52:01 by ismherna         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= fractol

CC		= gcc
CFLAGS	= -Werror -Wextra -Wall

MLX_PATH	= mlx/
MLX_NAME	= libmlx.a
MLX			= $(MLX_PATH)$(MLX_NAME)

LIBFT_PATH	= libft/
LIBFT_NAME	= libft.a
LIBFT		= $(LIBFT_PATH)$(LIBFT_NAME)

INC			=	-I ./includes/\
				-I ./libft/\
				-I ./mlx/

SRC_PATH	=	src/
SRC			=	fractol.c \
				initialization.c \
				utils.c \
				keys.c \
				render.c \
				colors.c \
				parse.c \
				help_msg.c \
				mandelbrot.c \
				julia.c \
				burning_ship.c \
				mandelbox.c \
				color_interpolated.c \
				color_special.c \
				color_striped.c
SRCS		= $(addprefix $(SRC_PATH), $(SRC))

# Objects
OBJ_PATH	= obj/
OBJ			= $(SRC:.c=.o)
OBJS		= $(addprefix $(OBJ_PATH), $(OBJ))

all: $(MLX) $(LIBFT) $(NAME)

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	@$(CC) $(CFLAGS) -c $< -o $@ $(INC)

$(OBJS): $(OBJ_PATH)

$(OBJ_PATH):
	@mkdir $(OBJ_PATH)
	@mkdir $(OBJ_PATH)fractal_sets/
	@mkdir $(OBJ_PATH)color_schemes/

$(MLX):
	@echo "Making MiniLibX..."
	@make -C $(MLX_PATH)


$(LIBFT):
	@echo "Making libft..."
	@make -sC $(LIBFT_PATH)

$(NAME): $(OBJS)
	@echo "Compiling fractol..."
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(MLX) $(LIBFT) $(INC) -lXext -lX11 -lm
	@echo "Fractol ready."
	@echo " ___   ___       _______          ________  ________      ________      ________      _________                   ________      ___              "
	@echo "|\  \ |\  \     /  ___  \        |\  _____\|\   __  \    |\   __  \    |\   ____\    |\___   ___\                |\   __  \    |\  \             "
	@echo "\ \  \\_\  \   /__/|_/  /|       \ \  \__/ \ \  \|\  \   \ \  \|\  \   \ \  \___|    \|___ \  \_|  ____________  \ \  \|\  \   \ \  \        	"
	@echo " \ \______  \  |__|//  / /        \ \   __\ \ \   _  _\   \ \   __  \   \ \  \            \ \  \  |\____________\ \ \  \\\  \   \ \  \       	"
	@echo "  \|_____|\  \     /  /_/__        \ \  \_|  \ \  \\  \|   \ \  \ \  \   \ \  \____        \ \  \ \|____________|  \ \  \\\  \   \ \  \____  	"
	@echo "         \ \__\   |\________\       \ \__\    \ \__\\ _\    \ \__\ \__\   \ \_______\       \ \__\                  \ \_______\   \ \_______\	"
	@echo "          \|__|    \|_______|        \|__|     \|__|\|__|    \|__|\|__|    \|_______|        \|__|                   \|_______|    \|_______|	"
	@echo "                                                                                                                                                 "
	@echo "                       							2024/05/01 - ismherna@student.42.fr - 42 Madrid - Ismael Hernández      "                                                                                                                                       
                                                                                                                                             

bonus: all


#remove objects and exeutable file 
clean:
	@echo "Removing .o object files..."
	@rm -rf $(OBJ_PATH)
	@make clean -C $(MLX_PATH)
	@make clean -C $(LIBFT_PATH)

fclean: clean
	@echo "Removing fractol..."
	@rm -f $(NAME)
	@rm -f $(LIBFT_PATH)$(LIBFT_NAME)

re: fclean all

.PHONY: all re clean fclean
