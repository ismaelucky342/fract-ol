/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keys.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 18:52:59 by ismherna          #+#    #+#             */
/*   Updated: 2024/04/12 18:53:01 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../fractol.h"

void	iterations(int key, t_mlx *mlx_info)
{
	if (key == IPLUS)
		mlx_info->iter.value += 1;
	if (key == IMINUS && mlx_info->iter.value > 1)
		mlx_info->iter.value -= 1;
}

void	zoom(int key, t_mlx *mlx_info)
{
	if (key == ZOOM_IN)
		mlx_info->zoom.value *= 1.1;
	if (key == ZOOM_OUT)
		mlx_info->zoom.value /= 1.1;
}

void	movement(int key, t_mlx *mlx_info)
{
	if (key == W_UP || key == UP)
		mlx_info->zoom.y -= 15 / mlx_info->zoom.value;
	if (key == S_DOWN || key == DOWN)
		mlx_info->zoom.y += 15 / mlx_info->zoom.value;
	if (key == A_LEFT || key == LEFT)
		mlx_info->zoom.x -= 15 / mlx_info->zoom.value;
	if (key == D_RIGHT || key == RIGHT)
		mlx_info->zoom.x += 15 / mlx_info->zoom.value;
}

void	reset(int key, t_mlx *mlx_info)
{
	if (key == RESET)
	{
		mlx_info->iter.value = 20;
		mlx_info->zoom.value = 200;
		mlx_info->zoom.x = 0;
		mlx_info->zoom.y = 0;
	}
}

void	escape(int key)
{
	if (key == ESC)
		exit(0);
}
