/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhalil- <ykhalil-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 23:40:56 by ykhalil-          #+#    #+#             */
/*   Updated: 2023/05/08 13:03:20 by ykhalil-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	xpm_to_image(t_main *x)
{
	x->l3ard = 50;
	x->toul = 50;
	x->ptr_0 = mlx_xpm_file_to_image(x->mlx_ptr, "./textures/0.xpm", &x->l3ard,
			&x->toul);
	x->ptr_1 = mlx_xpm_file_to_image(x->mlx_ptr, "./textures/1.xpm", &x->l3ard,
			&x->toul);
	x->ptr_c = mlx_xpm_file_to_image(x->mlx_ptr, "./textures/C.xpm", &x->l3ard,
			&x->toul);
	x->ptr_e = mlx_xpm_file_to_image(x->mlx_ptr, "./textures/E.xpm", &x->l3ard,
			&x->toul);
	x->ptr_p = mlx_xpm_file_to_image(x->mlx_ptr, "./textures/P.xpm", &x->l3ard,
			&x->toul);
	image_error(x);
}

void	ardlmaydan(t_main *x)
{
	x->i = 0;
	while (x->stora[x->i])
	{
		x->j = 0;
		while (x->stora[x->i][x->j])
		{
			mlx_put_image_to_window(x->mlx_ptr, x->win_ptr, x->ptr_0, x->j * 50,
				x->i * 50);
			x->j++;
		}
		x->i++;
	}
}

void	kolchi(t_main *x)
{
	x->i = 0;
	while (x->stora[x->i])
	{
		x->j = 0;
		while (x->stora[x->i][x->j])
		{
			if (x->stora[x->i][x->j] == '1')
				mlx_put_image_to_window(x->mlx_ptr, x->win_ptr, x->ptr_1, x->j
					* 50, x->i * 50);
			else if (x->stora[x->i][x->j] == 'P')
				mlx_put_image_to_window(x->mlx_ptr, x->win_ptr, x->ptr_p, x->j
					* 50, x->i * 50);
			else if (x->stora[x->i][x->j] == 'E')
				mlx_put_image_to_window(x->mlx_ptr, x->win_ptr, x->ptr_e, x->j
					* 50, x->i * 50);
			else if (x->stora[x->i][x->j] == 'C')
				mlx_put_image_to_window(x->mlx_ptr, x->win_ptr, x->ptr_c, x->j
					* 50, x->i * 50);
			x->j++;
		}
		x->i++;
	}
}

int	pl_posit(t_main *x)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (x->stora[i])
	{
		j = 0;
		while (x->stora[i][j])
		{
			if (x->stora[i][j] == 'P')
			{
				x->ipo = i;
				x->jpo = j;
				return (0);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}
