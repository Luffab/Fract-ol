/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luffab <luffab@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 16:06:12 by luffab            #+#    #+#             */
/*   Updated: 2021/06/01 18:20:29 by luffab           ###   ########lyon.fr   */
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
	float	zoom;
	float	x;
	float	y;
	float	movex;
	float	movey;
	int		screen_width;
	int		screen_height;
	int		iter;
	int		num;
	int		bpp;
	int		sizeline;
	int		endian;
}               t_fractal;

typedef struct	s_mandelbrot
{
	float	r_pixel;
	float	i_pixel;
	float	r_new;
	float	r_old;
	float	i_new;
	float	i_old;
	int		x;
	int		y;
	int		i;
}				t_mandelbrot;

void	ft_init_var(t_fractal *f);
void	ft_mandelbrot_set(t_fractal *f);
void	ft_fractol(int num, t_fractal *f);
void	ft_put_pixel(int x, int y, int rgb, t_fractal *f);
int		ft_color(int i, int iter);

#endif