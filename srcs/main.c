/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luffab <luffab@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 16:02:54 by fatilly           #+#    #+#             */
/*   Updated: 2021/06/02 18:16:16 by luffab           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int	ft_put_errors(int ac, int num)
{
	if (ac < 2)
	{
		ft_putstr_fd("Error\nNOT_ENOUGH_ARGUMENTS", 1);
		return (0);
	}
	else if (ac > 2)
	{
		ft_putstr_fd("Error\nTOO_MANY_ARGUMENTS", 1);
		return (0);
	}
	else if (num < 1 || num > 2)
	{
		ft_putstr_fd("Error\nEntrez 1 pour Mandelbrot ou 2 pour Julia", 1);
		return (0);
	}
	return (1);
}

void	ft_init_var(t_fractal *f)
{
	f->x = 0;
	f->y = 0;
	f->screen_width = 500;
	f->screen_height = 500;
	f->zoom = 1.1;
	f->movex = 1;
	f->movey = 1;
	f->iter = 100;
	f->reel = -1.417022285618;
	f->im = 0.0099534;
}

int main(int ac, char **av)
{
	t_fractal	*f;
	int			num;

	f = malloc(sizeof(t_fractal));
	num = 0;
	if (av[1])
		num = ft_atoi(av[1]);
	if (!ft_put_errors(ac, num))
		return (0);
	ft_fractol(num, f);
	return (1);
}

