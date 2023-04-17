// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   utils2.c                                           :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: ykhalil- <ykhalil-@student.42.fr>          +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2023/04/14 00:04:36 by ykhalil-          #+#    #+#             */
// /*   Updated: 2023/04/16 23:00:34 by ykhalil-         ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */

// #include "so_long.h"

// void	ft_move_w(t_main *x)
// {
// 	pl_posit(x);
// 	x->i = x->ipo;
// 	x->j = x->jpo;
// 	if (x->collect == x->x && x->stora[x->i - 1][x->j] == 'E')
// 	{
// 		ft_printf("rak rb7ti");
// 		exit(0);
// 	}
// 	if (x->stora[x->i][x->j] == 'P' && x->stora[x->i - 1][x->j] != '1'
// 		&& x->stora[x->i - 1][x->j] != 'E')
// 	{
// 		if (x->stora[x->i - 1][x->j] == 'C')
// 			x->collect++;
// 		x->stora[x->i - 1][x->j] = 'P';
// 		x->stora[x->i][x->j] = '0';
// 		ft_printf("moves : %d\n", ++x->moves);
// 		ardlmaydan(x);
// 		kolchi(x);
// 		return ;
// 	}
// }

// void	ft_move_s(t_main *x)
// {
// 	pl_posit(x);
// 	x->i = x->ipo;
// 	x->j = x->jpo;
// 	if (x->collect == x->x && x->stora[x->i + 1][x->j] == 'E')
// 	{
// 		ft_printf("rak rb7ti");
// 		exit(0);
// 	}
// 	if (x->stora[x->i][x->j] == 'P' && x->stora[x->i + 1][x->j] != '1'
// 		&& x->stora[x->i + 1][x->j] != 'E')
// 	{
// 		if (x->stora[x->i + 1][x->j] == 'C')
// 			x->collect++;
// 		x->stora[x->i + 1][x->j] = 'P';
// 		x->stora[x->i][x->j] = '0';
// 		ft_printf("moves : %d\n", ++x->moves);
// 		ardlmaydan(x);
// 		kolchi(x);
// 		return ;
// 	}
// }

// void	ft_move_a(t_main *x)
// {
// 	pl_posit(x);
// 	x->i = x->ipo;
// 	x->j = x->jpo;
// 	if (x->collect == x->x && x->stora[x->i][x->j - 1] == 'E')
// 	{
// 		ft_printf("rak rb7ti");
// 		exit(0);
// 	}
// 	if (x->stora[x->i][x->j] == 'P' && x->stora[x->i][x->j - 1] != '1'
// 		&& x->stora[x->i][x->j - 1] != 'E')
// 	{
// 		if (x->stora[x->i][x->j - 1] == 'C')
// 			x->collect++;
// 		x->stora[x->i][x->j - 1] = 'P';
// 		x->stora[x->i][x->j] = '0';
// 		ft_printf("moves : %d\n", ++x->moves);
// 		ardlmaydan(x);
// 		kolchi(x);
// 		return ;
// 	}
// }

// void	ft_move_d(t_main *x)
// {
// 	pl_posit(x);
// 	x->i = x->ipo;
// 	x->j = x->jpo;
// 	if (x->collect == x->x && x->stora[x->i][x->j + 1] == 'E')
// 	{
// 		ft_printf("rak rb7ti");
// 		exit(0);
// 	}
// 	if (x->stora[x->i][x->j] == 'P' && x->stora[x->i][x->j + 1] != '1'
// 		&& x->stora[x->i][x->j + 1] != 'E')
// 	{
// 		if (x->stora[x->i][x->j + 1] == 'C')
// 			x->collect++;
// 		x->stora[x->i][x->j + 1] = 'P';
// 		x->stora[x->i][x->j] = '0';
// 		ft_printf("moves : %d\n", ++x->moves);
// 		ardlmaydan(x);
// 		kolchi(x);
// 		return ;
// 	}
// }

// int	deal_key(int key, t_main *x)
// {
// 	if (key == KEY_ESC)
// 		exit(0);
// 	else if (key == KEY_W)
// 		ft_move_w(x);
// 	else if (key == KEY_A)
// 		ft_move_a(x);
// 	else if (key == KEY_S)
// 		ft_move_s(x);
// 	else if (key == KEY_D)
// 		ft_move_d(x);
// 	ft_printf("%d(%d)\n", x->collect, x->x);
// 	return (0);
// }
