/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luffab <luffab@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 16:06:12 by luffab            #+#    #+#             */
/*   Updated: 2021/06/02 18:05:53 by luffab           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTAL_H
# define FRACTAL_H

#include "../mlx/mlx.h"
#include "../libft/libft.h"
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>
# include <math.h>

typedef struct  s_fractal
{
	void	*win;
	void	*mlx;
	void	*img;
	char	*data;
	double	zoom;
	double	x;
	double	y;
	double	movex;
	double	movey;
	double	reel;
	double	im;
	int		screen_width;
	int		screen_height;
	int		iter;
	int		num;
	int		bpp;
	int		sizeline;
	int		endian;
	int		r;
	int		g;
	int		b;
}               t_fractal;

typedef struct	s_mandelbrot
{
	double	r_pixel;
	double	i_pixel;
	double	r_new;
	double	r_old;
	double	i_new;
	double	i_old;
	int		x;
	int		y;
	int		i;
}				t_mandelbrot;

typedef struct	s_julia
{
	double	r_new;
	double	r_old;
	double	i_new;
	double	i_old;
	int		x;
	int		y;
	int		i;
}				t_julia;


void	ft_init_var(t_fractal *f);
void	ft_mandelbrot_set(t_fractal *f);
void	ft_fractol(int num, t_fractal *f);
void	ft_put_pixel(int x, int y, int rgb, t_fractal *f);
int		ft_color(int i, int iter);
void	ft_put_rgb(t_fractal *f, int x, int y);
int		ft_key_press(int key, t_fractal *f);
int		ft_close_win();
int		ft_mouse_hook(int key, int x, int y, t_fractal *f);
int		ft_loop_hook(t_fractal *f);
void	ft_julia_set(t_fractal *f);
#endif