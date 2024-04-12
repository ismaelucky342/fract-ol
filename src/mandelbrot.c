/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mandelbrot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 18:53:08 by ismherna          #+#    #+#             */
/*   Updated: 2024/04/12 19:20:40 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../fractol.h"

int	mandelbrot_iter(t_complex c, int maxiter)
{
	int			i;
	t_complex	z;
	double		temp;

	z.real = 0;
	z.imag = 0;
	i = 0;
	while (i < maxiter && z.real * z.real + z.imag * z.imag <= 4)
	{
		temp = z.real * z.real - z.imag * z.imag + c.real;
		z.imag = 2 * z.real * z.imag + c.imag;
		z.real = temp;
		i++;
	}
	return (i);
}

void	draw_mandelbrot(t_img *img, t_mlx mlx_info)
{
	int			x;
	int			y;
	int			color;
	t_complex	c;

	y = 0;
	while (y < WIN_HEIGHT)
	{
		x = 0;
		while (x < WIN_WIDTH)
		{
			c = map_pixel_to_complex(x, y, mlx_info);
			color = mandelbrot_iter(c, mlx_info.iter.value);
			my_mlx_pixel_put(img, x, y, calc_col(color, mlx_info));
			x++;
		}
		y++;
	}
}