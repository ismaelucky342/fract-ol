/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   help_msg.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 13:01:37 by ismherna          #+#    #+#             */
/*   Updated: 2024/05/02 00:11:10 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	print_fractal_options(void);
void	print_color_options(void);

static void	print_fractal_options2(void)
{
	ft_printf("\n+===============> FRACTALS: \n");
	ft_printf("\n\tM - Mandelbrot\n");
	ft_printf("\tJ - Julia\n");
	ft_printf("\tB - Burning Ship\n");
	ft_printf("\tX - Mandelbox\n");
}

static void	print_color_options2(void)
{
	ft_printf("\n+=============== COLOR  ====================+");
	ft_printf("\nPick color my love:\n");
	ft_printf("\n White:\tFFFFFF\t\t\nBlack:\t000000", 1);
	ft_printf("\t\nRed:\tFF0000\t\t\nGreen:\t00FF00", 1);
	ft_printf("\t\nBlue:\t0000FF\t\t\nYellow:\tFFFF00", 1);
}

void	help_menu()
{
	ft_printf("\n+====================================================+");
	ft_printf("|                   ISMHERNA FRACT'OL                  |");
	ft_printf("+====================================================+\n");
	print_fractal_options2();
	print_color_options2();
	exit(EXIT_FAILURE);
}
