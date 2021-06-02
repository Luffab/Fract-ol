/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luffab <luffab@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 17:31:08 by luffab            #+#    #+#             */
/*   Updated: 2021/06/02 18:06:05 by luffab           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	ft_choose_set(t_fractal *f)
{
	mlx_clear_window(f->mlx, f->win);
	if (f->num == 1)
		ft_mandelbrot_set(f);
	else if (f->num == 2)
		ft_julia_set(f);
	mlx_put_image_to_window(f->mlx, f->win, f->img, 0, 0);
}

int		ft_expose_hook(t_fractal *f)
{
	ft_choose_set(f);
	return (0);
}

int		ft_loop_hook(t_fractal *f)
{
	ft_choose_set(f);
	return (0);
}


void	ft_init_window(t_fractal *f)
{
	ft_init_var(f);
	f->mlx = mlx_init();
	f->win = mlx_new_window(f->mlx, f->screen_width, f->screen_width, "Fract-ol");
	f->img = mlx_new_image (f->mlx, f->screen_width, f->screen_width);
	f->data = mlx_get_data_addr(f->img, &f->bpp, &f->sizeline, &f->endian);
	mlx_expose_hook(f->win, ft_expose_hook, f);
	mlx_loop_hook(f->mlx, ft_loop_hook, f);
	mlx_key_hook(f->win, ft_key_press, f);
	mlx_mouse_hook(f->win, ft_mouse_hook, f);
	mlx_hook(f->win, 17, 0, ft_close_win, f);
	mlx_loop(f->mlx);
}

void	ft_fractol(int num, t_fractal *f)
{
	f->num = num;
	ft_init_window(f);
}