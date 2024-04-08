/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 02:36:46 by ismherna          #+#    #+#             */
/*   Updated: 2024/04/08 14:01:46 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# include "./libft/libft.h"
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <limits.h>
# include <string.h>
# include "mlx/mlx.h"
# include <math.h>

# define WIN_WIDTH 800
# define WIN_HEIGHT 800
# define MAX_ITER 100
# define CENTER_REAL -0.75
# define CENTER_IMAG -0.75

/*Keys*/
# define ESC 53
# define RESET 15
# define IPLUS 34
# define IMINUS 31
# define MW_UP 4
# define MW_DOWN 5
# define ZOOM_IN 69
# define ZOOM_OUT 78
# define W_UP 13
# define S_DOWN 1
# define A_LEFT 0
# define D_RIGHT 2
# define UP 126
# define DOWN 125
# define LEFT 123
# define RIGHT 124
# define ON_DESTROY 17


typedef struct s_complex
{
	double	real;
	double	imag;
}			t_complex;

typedef struct s_color
{
	int	r;
	int	g;
	int	b;
	int	t;
}		t_color;

typedef struct s_palette
{
	int	r;
	int	g;
	int	b;
	int	main_r;
	int	main_g;
	int	main_b;
}		t_palette;

typedef struct s_iter
{
	int	defaultval;
	int	value;
}		t_iter;

typedef struct s_zoom
{
	double	value;
	int		delta;
	double	x;
	double	y;
}			t_zoom;

typedef struct s_type
{
	int	value;
}		t_type;

typedef struct s_img
{
	void		*img_ptr;
	char		*data;
	int			size_l;
	int			bpp;
	int			endian;
}				t_img;

typedef struct s_mlx
{
	void		*mlx_ptr;
	void		*win;
	t_img		img;
	t_zoom		zoom;
	t_iter		iter;
	t_palette	palette;
	t_type		type;
	t_complex	julia;
}				t_mlx;

typedef struct s_fractol
{
	t_mlx	mlx;
	t_zoom	zoom;
}			t_fractol;

/*INIT*/
void init_mlx(t_fractol *fractol);
void init_fractol(t_fractol *fractol);

/*Fractal*/
void draw_mandelbrot(t_fractol *fractol);
void draw_julia(t_fractol *fractol);
void draw_burning_ship(t_fractol *fractol);
void draw_fractal(t_fractol *fractol);

/*Hooks*/
int handle_key_press(int keycode, t_fractol *fractol);
int handle_mouse_press(int button, int x, int y, t_fractol *fractol);
int handle_mouse_move(int x, int y, t_fractol *fractol);

/*Utils */
void zoom(t_fractol *fractol, double zoom_factor, int x, int y);
void move(t_fractol *fractol, int direction);
void reset_fractol(t_fractol *fractol);
void update_palette(t_fractol *fractol);



#endif 