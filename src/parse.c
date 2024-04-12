<<<<<<< HEAD
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 18:53:21 by ismherna          #+#    #+#             */
/*   Updated: 2024/04/12 18:53:22 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



=======
>>>>>>> af345d2c3af1a00d266c0fc367bee43d6525f67f
#include "../fractol.h"
#include <stdio.h>

void	ft_error(void)
{
	ft_printf("BAD INPUT.\n");
	ft_printf("Please select one of the following:\n");
	ft_printf("./fractol Mandelbrot\n");
	ft_printf("./fractol Julia <x.x> <x.x>\n");
	exit(0);
}

void	parse_doubles(char *arg1, char *arg2, t_mlx *mlx_info)
{
	double	d1;
	double	d2;

	d1 = ft_atof(arg1);
	d2 = ft_atof(arg2);
	if (!d1 || !d2)
		ft_error();
	else
	{
		mlx_info->julia.imag = d1;
		mlx_info->julia.real = d2;
	}
}

void	checkargs(int ac, char **av, t_mlx *mlx_info)
{
	if (ac > 1 && ac <= 4)
	{
		if (ft_strcmp(av[1], "Mandelbrot") == 0)
		{
			mlx_info->type.value = 0;
		}
		else if (ft_strcmp(av[1], "Julia") == 0)
		{
			mlx_info->type.value = 1;
			if (ac > 2)
				parse_doubles(av[2], av[3], mlx_info);
			else
				def_complex(mlx_info);
		}
		else
			ft_error();
	}
	else
		ft_error();
}
