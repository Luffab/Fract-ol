/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mandelbrot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luffab <luffab@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 17:01:06 by luffab            #+#    #+#             */
/*   Updated: 2021/06/01 18:54:49 by luffab           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

/*t_mandelbrot	ft_init_mandelbrot_w(t_mandelbrot m)
{
	m.x = -1;
	m.y = -1;
	m.i = -1;
	return (m);
}*/

t_mandelbrot	ft_init_mandelbrot_h(t_fractal *f, t_mandelbrot m)
{
	m.r_pixel = (m.x - f->screen_width / 2)
				/ (0.5 * f->zoom * f->screen_width) + f->movex;
	m.i_pixel = (m.y - f->screen_height / 2)
				/ (0.5 * f->zoom * f->screen_height) + f->movey;
	m.r_new = 0;
	m.r_old = 0;
	m.i_new = 0;
	m.i_old = 0;
	return (m);
}

void	ft_mandelbrot_set(t_fractal *f)
{
	t_mandelbrot m;

	//m = ft_init_mandelbrot_w(m);
	m.x = 0;
	while (m.x < f->screen_width)
	{
		m.y = 0;
		while (m.y < f->screen_height)
		{
			m = ft_init_mandelbrot_h(f, m);
			m.i = 0;
			while (m.i < f->iter)
			{
				m.r_old = m.r_new;
				m.i_old = m.i_new;
				m.r_new = m.r_old * m.r_old - m.i_old * m.i_old + m.r_pixel;
				m.i_new = 2 * m.r_old * m.i_old + m.i_pixel;
				if ((m.r_new * m.r_new + m.i_new * m.i_new) > 4)
					break;
				m.i++;
			}
			ft_put_pixel(m.y, m.x, ft_color(m.i, f->iter), f);
			m.y++;
		}
		m.x++;
	}
}