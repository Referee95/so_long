/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   path.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhalil- <ykhalil-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 03:22:12 by ykhalil-          #+#    #+#             */
/*   Updated: 2023/05/05 15:22:28 by ykhalil-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	destroy_game(t_main *x)
{
	ft_free2(x);
	exit(0);
	return (0);
}

void	valid_path2(t_main *x)
{
	int	i;
	int	j;

	x->collect = 0;
	x->moves = 0;
	i = -1;
	while (x->ptr[++i])
	{
		j = -1;
		while (x->ptr[i][++j])
		{
			if (x->ptr[i][j] == 'E')
			{
				ft_printf("bghiti tqolbni wla");
				ft_free(x->ptr);
				ft_free(x->stora);
				ft_free(x->str);
				exit(1);
			}
		}
	}
}

void	valid_path(t_main *x)
{
	int	i;
	int	j;

	i = -1;
	while (x->str[++i])
	{
		j = -1;
		while (x->str[i][++j])
		{
			if (x->str[i][j] == 'C')
			{
				ft_printf("bghiti tqolbni wla");
				ft_free(x->ptr);
				ft_free(x->stora);
				ft_free(x->str);
				exit(1);
			}
		}
	}
}

void	check_path(t_main *x, int a, int b)
{
	x->str[a][b] = '1';
	if (x->str[a + 1][b] != '1' && x->str[a + 1][b] != 'E')
		check_path(x, a + 1, b);
	if (x->str[a - 1][b] != '1' && x->str[a - 1][b] != 'E')
		check_path(x, a - 1, b);
	if (x->str[a][b + 1] != '1' && x->str[a][b + 1] != 'E')
		check_path(x, a, b + 1);
	if (x->str[a][b - 1] != '1' && x->str[a][b - 1] != 'E')
		check_path(x, a, b - 1);
}

void	check_path2(t_main *x, int a, int b)
{
	x->ptr[a][b] = '1';
	if (x->ptr[a + 1][b] != '1')
		check_path2(x, a + 1, b);
	if (x->ptr[a - 1][b] != '1')
		check_path2(x, a - 1, b);
	if (x->ptr[a][b + 1] != '1')
		check_path2(x, a, b + 1);
	if (x->ptr[a][b - 1] != '1')
		check_path2(x, a, b - 1);
}
