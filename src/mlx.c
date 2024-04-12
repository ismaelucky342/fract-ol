<<<<<<< HEAD
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 18:53:12 by ismherna          #+#    #+#             */
/*   Updated: 2024/04/12 19:08:41 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


=======
>>>>>>> af345d2c3af1a00d266c0fc367bee43d6525f67f
#include "../fractol.h"

void	my_mlx_pixel_put(t_img *img, int x, int y, int color)
{
	char	*dst;

	dst = img->data + (y * img->size_l + x * (img->bpp / 8));
	*(unsigned int *)dst = color;
}

void	setup_mlx(t_mlx *mlx_info)
{
	mlx_info->mlx_ptr = mlx_init();
	mlx_info->win = mlx_new_window(mlx_info->mlx_ptr,
			WIN_WIDTH, WIN_HEIGHT, "Mandelbrot Set");
	mlx_info->img.img_ptr = mlx_new_image(mlx_info->mlx_ptr,
			WIN_WIDTH, WIN_HEIGHT);
	mlx_info->img.data = mlx_get_data_addr(mlx_info->img.img_ptr,
			&mlx_info->img.bpp,
			&mlx_info->img.size_l,
			&mlx_info->img.endian);
}
