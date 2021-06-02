/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   julia.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luffab <luffab@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 17:37:17 by luffab            #+#    #+#             */
/*   Updated: 2021/06/02 17:49:34 by luffab           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	ft_julia_set(t_fractal *f)
{
	t_julia j;

	j.x = 0;
	while (j.x < f->screen_width)
	{
		j.y = 0;
		while (j.y < f->screen_height)
		{
			j.r_new = (((j.x + f->x) / f->zoom / f->screen_width * 4 - 2));
			j.i_new = (((j.y + f->y) / f->zoom / f->screen_height * 4 - 2));
			j.i = 0;
			while (j.i < f->iter)
			{
				j.r_old = j.r_new;
				j.i_old = j.i_new;
				j.r_new = j.r_old * j.r_old - j.i_old * j.i_old + f->reel;
				j.i_new = 2 * j.r_old * j.i_old + f->im;
				if ((j.r_new * j.r_new + j.i_new * j.i_new) > 4)
					break;
				j.i++;
			}
			ft_put_pixel(j.y, j.x, ft_color(j.i, f->iter), f);
			j.y++;
		}
		j.x++;
	}
}