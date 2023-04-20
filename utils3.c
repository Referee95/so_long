/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhalil- <ykhalil-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 23:35:54 by ykhalil-          #+#    #+#             */
/*   Updated: 2023/04/18 23:43:00 by ykhalil-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_free(char **arr)
{
	int	i;

	i = -1;
	while (arr[++i])
		free(arr[i]);
	free(arr);
}

void	ft_free2(t_main *x)
{
	mlx_destroy_image(x->mlx_ptr, x->ptr_0);
	mlx_destroy_image(x->mlx_ptr, x->ptr_1);
	mlx_destroy_image(x->mlx_ptr, x->ptr_c);
	mlx_destroy_image(x->mlx_ptr, x->ptr_e);
	mlx_destroy_image(x->mlx_ptr, x->ptr_p);
	mlx_destroy_window(x->mlx_ptr, x->win_ptr);
	ft_free(x->stora);
	ft_free(x->str);
	ft_free(x->ptr);
}

void	map_free(t_main *x)
{
	ft_free(x->str);
	ft_free(x->ptr);
	werror2(x);
}

void	image_error(t_main *x)
{
	if (!x->ptr_0 || !x->ptr_1 || !x->ptr_c || !x->ptr_e || !x->ptr_p)
		image_error2(x);
}

void	image_error2(t_main *x)
{
	if (x->ptr_0)
		mlx_destroy_image(x->mlx_ptr, x->ptr_0);
	if (x->ptr_1)
		mlx_destroy_image(x->mlx_ptr, x->ptr_1);
	if (!x->ptr_c)
		mlx_destroy_image(x->mlx_ptr, x->ptr_c);
	if (x->ptr_e)
		mlx_destroy_image(x->mlx_ptr, x->ptr_e);
	if (x->ptr_p)
		mlx_destroy_image(x->mlx_ptr, x->ptr_p);
	map_free(x);
}
