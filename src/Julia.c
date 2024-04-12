<<<<<<< HEAD
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   julia.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 18:52:54 by ismherna          #+#    #+#             */
/*   Updated: 2024/04/12 18:52:56 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../fractol.h"

=======
#include "../fractol.h"

>>>>>>> af345d2c3af1a00d266c0fc367bee43d6525f67f
double	map_pixel_to_y(int y, t_mlx mlx_info)
{
	double	res;

	res = ((y - WIN_HEIGHT / 2.0) / mlx_info.zoom.value) + mlx_info.zoom.y;
	return (res);
}

double	map_pixel_to_x(int x, t_mlx mlx_info)
{
	double	res;

	res = ((x - WIN_WIDTH / 2.0) / mlx_info.zoom.value) + mlx_info.zoom.x;
	return (res);
}

int	julia_iter(double x, double y, int maxiter, t_complex c)
{
	int			i;
	t_complex	z;
	double		temp;

	z.real = x;
	z.imag = y;
	i = 0;
	while (i < maxiter && z.real * z.real + z.imag * z.imag <= 4)
	{
		temp = z.real * z.real - z.imag * z.imag + c.imag;
		z.imag = 2 * z.real * z.imag + c.real;
		z.real = temp;
		i++;
	}
	return (i);
}

void	draw_julia(t_img *img, t_mlx *mlx_info)
{
	int		x;
	int		y;
	int		color;
	double	mx;
	double	my;

	y = 0;
	while (y < WIN_HEIGHT)
	{
		x = 0;
		while (x < WIN_WIDTH)
		{
			mx = map_pixel_to_x(x, *mlx_info);
			my = map_pixel_to_y(y, *mlx_info);
			color = julia_iter(mx, my, mlx_info->iter.value, mlx_info->julia);
			my_mlx_pixel_put(img, x, y, calc_col(color, *mlx_info));
			x++;
		}
		y++;
	}
}
