/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_hook.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luffab <luffab@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 19:04:17 by luffab            #+#    #+#             */
/*   Updated: 2021/06/02 17:25:37 by luffab           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int	ft_key_press(int key, t_fractal *f)
{
	if (key == 65307)
		exit(0);
	if (key == 65364)
		f->y -= 10;
	if (key == 65362)
		f->y += 10;
	if (key == 65363)
		f->x -= 10;
	if (key == 65361)
		f->x += 10;
	return (0);
}

int	ft_close_win()
{
	exit(0);
}

int	ft_mouse_hook(int key, int x, int y, t_fractal *f)
{
	if (key == 4)
	{
		f->zoom *= 1.1;
		f->x = (f->x + ((f->screen_width - (f->screen_width / 1.1)) / 2) + (x - f->screen_width / 2) * (1 - (1 / 1.1))) * 1.1;
		f->y = (f->y + ((f->screen_width - (f->screen_width / 1.1)) / 2) + (y - f->screen_width / 2) * (1 - (1 / 1.1))) * 1.1;
	}
	if (key == 5)
	{
		f->zoom /= 1.1;
		f->x = f->x / 1.1 - ((f->screen_width - (f->screen_width / 1.1)) / 2) / 1.1
				-(x - f->screen_width / 2) * 1.1 + (x - f->screen_width / 2);
		f->y = f->y / 1.1 - ((f->screen_width - (f->screen_width / 1.1)) / 2) / 1.1
				-(y - f->screen_width / 2) * 1.1 + (y - f->screen_width / 2);
	}
	ft_loop_hook(f);
	return (0);
}