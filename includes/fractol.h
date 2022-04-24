/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsage <jsage@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 17:19:05 by jsage             #+#    #+#             */
/*   Updated: 2022/04/23 17:14:25 by jsage            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <mlx.h>
# include "libft.h"
# define WIDTH 1080
# define HEIGHT 1080
# define RED 250
# define GREEN 20
# define BLUE 220

typedef struct s_mlx
{
	void	*mlx_ptr;
	void	*mlx_win;
	int		*img;
	int		*addr;
	int		bpp;
	int		line_len;
	int		endian;
}	t_mlx;

typedef struct s_fractal
{
	int		type;
	double	zoom;
	double	c_re;
	double	c_im;
	double	scale_x;
	double	scale_y;
	double	x_min;
	double	x_max;
	double	y_min;
	double	y_max;
	int		press;
}	t_fractal;

typedef struct s_global
{
	t_mlx		*mlx;
	t_fractal	*fractal;
}	t_global;

void		julia_set(t_global *global);
int			call_julia(int ac, char **av);

void		mandelbrot_set(t_global *global);
int			call_mandelbrot(void);

void		draw(t_global *global, int nbi);
t_global	*init_vars(int type, double c_re, double c_im);

void		mlx_hook_start(t_global *global);
int			ft_exit(t_global *fractal);
int			key_hook(int keycode, t_global *global);
int			mouse_hook(int code, int x, int y, t_global *global);
int			click_and_drag(int x, int y, t_global *global);

int			mouse_up(t_global *global);
int			mouse_down(t_global *global);
int			l_click(t_global *global);

#endif
