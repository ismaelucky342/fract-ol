/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   defaults.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 18:52:39 by ismherna          #+#    #+#             */
/*   Updated: 2024/04/12 19:34:39 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../fractol.h"

void defpallete(t_mlx *mlx_info)
{
    mlx_info->palette.r = 0;
    mlx_info->palette.g = 255; // Verde nuclear
    mlx_info->palette.b = 0;
    mlx_info->palette.main_r = 50;
    mlx_info->palette.main_g = 60; // Azul verdoso
    mlx_info->palette.main_b = 200;
}

void defiter(t_mlx *mlx_info)
{
    mlx_info->iter.value = 20;
}

void defzoom(t_mlx *mlx_info)
{
    mlx_info->zoom.value = 200;
}

void def_complex(t_mlx *mlx_info)
{
    mlx_info->julia.imag = 0.285;
    mlx_info->julia.real = -0.01;
}

void defsetup(t_mlx *mlx_info)
{
    defpallete(mlx_info);
    defzoom(mlx_info);
    defiter(mlx_info);
}
