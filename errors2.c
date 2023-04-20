/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhalil- <ykhalil-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 23:16:38 by ykhalil-          #+#    #+#             */
/*   Updated: 2023/04/20 01:53:08 by ykhalil-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	werror2(t_main *x)
{
	write(2, "Error\n", 6);
	ft_free(x->stora);
	exit(1);
}

void	error4(t_main *x)
{
	x->i = -1;
	x->x = 0;
	x->y = 0;
	x->z = 0;
	while (x->stora[++x->i])
	{
		x->j = -1;
		while (x->stora[x->i][++x->j])
		{
			if (x->stora[x->i][x->j] == 'C')
				x->x++;
			else if (x->stora[x->i][x->j] == 'P')
				x->y++;
			else if (x->stora[x->i][x->j] == 'E')
				x->z++;
		}
	}
	if (x->x < 1 || x->y != 1 || x->z != 1)
		werror2(x);
}

void	error5(t_main *x)
{
	x->i = -1;
	while (x->stora[0][++x->i])
	{
		if (x->stora[0][x->i] != '1')
			werror2(x);
	}
	x->i = -1;
	while (x->stora[++x->i])
		;
	x->j = -1;
	while (x->stora[x->i - 1][++x->j])
	{
		if (x->stora[x->i - 1][x->j] != '1')
			werror2(x);
	}
}

void	error6(t_main *x)
{
	x->i = -1;
	while (x->stora[++x->i])
	{
		if (x->stora[x->i][0] != '1')
			werror2(x);
		x->j = ft_strlen(x->stora[x->i]) - 1;
		if (x->stora[x->i][x->j] != '1')
			werror2(x);
	}
}

void	errors(char **av, t_main *x)
{
	error(av, x);
	error2(x);
	error3(x);
	error4(x);
	error5(x);
	error6(x);
}
