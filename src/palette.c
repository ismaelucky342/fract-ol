/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   palette.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 18:53:17 by ismherna          #+#    #+#             */
/*   Updated: 2024/04/12 19:36:54 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../fractol.h>

void color1(int key, t_mlx *mlx_info)
{
    if (key == 18)
    {
        mlx_info->palette.g = 0; // Cambiado a azul
        mlx_info->palette.main_g = 0; // Cambiado a azul
    }
}

void color2(int key, t_mlx *mlx_info)
{
    if (key == 19)
    {
        mlx_info->palette.r = 255; // Cambiado a rojo
        mlx_info->palette.main_r = 255; // Cambiado a rojo
    }
}

void color3(int key, t_mlx *mlx_info)
{
    if (key == 20)
    {
        mlx_info->palette.b = 255; // Cambiado a azul
        mlx_info->palette.main_b = 255; // Cambiado a azul
    }
}

void color4(int key, t_mlx *mlx_info)
{
    if (key == 21)
    {
        mlx_info->palette.g = 255; // Cambiado a verde
        mlx_info->palette.main_g = 200; // Cambiado a verde claro
    }
}

void color5(int key, t_mlx *mlx_info)
{
    if (key == 29)
    {
        mlx_info->palette.g = 255; // Cambiado a verde
        mlx_info->palette.b = 255; // Cambiado a azul
        mlx_info->palette.main_g = 200; // Cambiado a verde claro
        mlx_info->palette.main_b = 60; // Conservado el tono azul verdoso
    }
}
