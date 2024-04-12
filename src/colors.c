/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 18:52:18 by ismherna          #+#    #+#             */
/*   Updated: 2024/04/12 19:31:05 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../fractol.h"

int create_trgb(int t, int r, int g, int b)
{
    return (t << 24 | r << 16 | g << 8 | b);
}


int get_t(int trgb)
{
    return ((trgb >> 24) & 0xFF);
}

int get_r(int trgb)
{
    return ((trgb >> 16) & 0xFF);
}

int get_g(int trgb)
{
    return ((trgb >> 8) & 0xFF);
}

int get_b(int trgb)
{
    return (trgb & 0xFF);
}
