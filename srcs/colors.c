/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luffab <luffab@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 18:01:30 by luffab            #+#    #+#             */
/*   Updated: 2021/06/01 19:03:43 by luffab           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int	ft_color(int i, int iter)
{
	float	n;
	int		r;
	int		g;
	int		b;

	n = (float)i / iter;
	r = (sin(n * 3.14 * 2 - (3.14 / 2)) + 1) / 2 * 255;
	g = (sin(n * 3.14 * 4 - (3.14 / 2)) + 1) / 2 * 255;
	b = (sin(n * 3.14 * 8 - (3.14 / 2)) + 1) / 2 * 255;
	return (0x10000 * r + 0x100 * g + b);
}

void	ft_put_pixel(int x, int y, int rgb, t_fractal *f)
{
	int	pixel;

	pixel = (x * f->sizeline) + (y * (f->bpp / 8));
	ft_memcpy(f->data + pixel, &rgb, f->bpp / 8);
}