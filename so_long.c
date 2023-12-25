/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhalil- <ykhalil-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 10:29:54 by ykhalil-          #+#    #+#             */
/*   Updated: 2023/05/05 18:10:00 by ykhalil-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int ac, char **av)
{
	t_main	x;

	if (ac == 2)
	{
		x.stora = read_all(&x, av[1]);
		errors(av, &x);
		pl_posit(&x);
		x.str = read_all(&x, av[1]);
		x.ptr = read_all(&x, av[1]);
		check_path(&x, x.ipo, x.jpo);
		check_path2(&x, x.ipo, x.jpo);
		valid_path(&x);
		valid_path2(&x);
		x.mlx_ptr = mlx_init();
		x.win_ptr = mlx_new_window(x.mlx_ptr, (x.j + 1) * 50, x.i * 50,
				"so_long");
		xpm_to_image(&x);
		ardlmaydan(&x);
		kolchi(&x);
		mlx_key_hook(x.win_ptr, deal_key, &x);
		mlx_hook(x.win_ptr, 17, 0, destroy_game, &x);
		mlx_loop(x.mlx_ptr);
	}
}
