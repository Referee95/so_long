/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhalil- <ykhalil-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 01:26:36 by ykhalil-          #+#    #+#             */
/*   Updated: 2023/04/20 01:19:50 by ykhalil-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	ft_move_w_bonus(t_main *x)
{
	pl_posit(x);
	x->i = x->ipo;
	x->j = x->jpo;
	if (x->collect == x->x && x->stora[x->i - 1][x->j] == 'E')
	{
		ft_printf("rak rb7ti");
		ft_free2(x);
		exit(0);
	}
	if (x->stora[x->i][x->j] == 'P' && x->stora[x->i - 1][x->j] != '1'
		&& x->stora[x->i - 1][x->j] != 'E')
	{
		if (x->stora[x->i - 1][x->j] == 'C')
			x->collect++;
		x->stora[x->i - 1][x->j] = 'P';
		x->stora[x->i][x->j] = '0';
		ardlmaydan(x);
		kolchi(x);
		ft_put_str_win(x);
		return ;
	}
}

void	ft_move_s_bonus(t_main *x)
{
	pl_posit(x);
	x->i = x->ipo;
	x->j = x->jpo;
	if (x->collect == x->x && x->stora[x->i + 1][x->j] == 'E')
	{
		ft_printf("rak rb7ti");
		ft_free2(x);
		exit(0);
	}
	if (x->stora[x->i][x->j] == 'P' && x->stora[x->i + 1][x->j] != '1'
		&& x->stora[x->i + 1][x->j] != 'E')
	{
		if (x->stora[x->i + 1][x->j] == 'C')
			x->collect++;
		x->stora[x->i + 1][x->j] = 'P';
		x->stora[x->i][x->j] = '0';
		ardlmaydan(x);
		kolchi(x);
		ft_put_str_win(x);
		return ;
	}
}

void	ft_move_a_bonus(t_main *x)
{
	pl_posit(x);
	x->i = x->ipo;
	x->j = x->jpo;
	if (x->collect == x->x && x->stora[x->i][x->j - 1] == 'E')
	{
		ft_printf("rak rb7ti");
		ft_free2(x);
		exit(0);
	}
	if (x->stora[x->i][x->j] == 'P' && x->stora[x->i][x->j - 1] != '1'
		&& x->stora[x->i][x->j - 1] != 'E')
	{
		if (x->stora[x->i][x->j - 1] == 'C')
			x->collect++;
		x->stora[x->i][x->j - 1] = 'P';
		x->stora[x->i][x->j] = '0';
		ardlmaydan(x);
		kolchi(x);
		ft_put_str_win(x);
		return ;
	}
}

void	ft_move_d_bonus(t_main *x)
{
	pl_posit(x);
	x->i = x->ipo;
	x->j = x->jpo;
	if (x->collect == x->x && x->stora[x->i][x->j + 1] == 'E')
	{
		ft_printf("rak rb7ti");
		ft_free2(x);
		exit(0);
	}
	if (x->stora[x->i][x->j] == 'P' && x->stora[x->i][x->j + 1] != '1'
		&& x->stora[x->i][x->j + 1] != 'E')
	{
		if (x->stora[x->i][x->j + 1] == 'C')
			x->collect++;
		x->stora[x->i][x->j + 1] = 'P';
		x->stora[x->i][x->j] = '0';
		ardlmaydan(x);
		kolchi(x);
		ft_put_str_win(x);
		return ;
	}
}

int	deal_key_bonus(int key, t_main *x)
{
	if (key == KEY_ESC)
	{
		ft_free2(x);
		exit(0);
	}
	else if (key == KEY_W)
		ft_move_w_bonus(x);
	else if (key == KEY_A)
		ft_move_a_bonus(x);
	else if (key == KEY_S)
		ft_move_s_bonus(x);
	else if (key == KEY_D)
		ft_move_d_bonus(x);
	return (0);
}
