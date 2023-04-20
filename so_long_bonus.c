/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhalil- <ykhalil-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 23:43:49 by ykhalil-          #+#    #+#             */
/*   Updated: 2023/04/20 02:25:11 by ykhalil-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	ft_put_str_win(t_main *x)
{
	char	*str;

	str = ft_itoa(++x->moves);
	mlx_string_put(x->mlx_ptr, x->win_ptr, 100, 3, 0x00, "moves : ");
	mlx_string_put(x->mlx_ptr, x->win_ptr, 200, 3, 0x00, str);
	free(str);
}

size_t	ft_len(long long number)
{
	size_t	i;

	i = 0;
	if (!number)
		return (1);
	while (number)
	{
		number /= 10;
		i++;
	}
	return (i);
}

char	*memnumber(long long n, char *str, size_t len)
{
	int			i;
	long long	tmp;

	tmp = n;
	i = (int)len - 1;
	if (n < 0)
		n *= -1;
	while (i >= 0)
	{
		str[i] = (n % 10) + '0';
		n /= 10;
		i--;
	}
	if (tmp < 0)
		str[0] = '-';
	str[len] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	long long	number;
	size_t		numberlen;
	char		*str;

	numberlen = 0;
	number = n;
	if (number < 0)
	{
		number *= -1;
		numberlen++;
	}
	numberlen += ft_len(number);
	str = (char *)malloc(numberlen + 1);
	if (!str)
		return (0);
	str = memnumber(n, str, numberlen);
	return (str);
}

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
		doz_ahbibi(&x);
		doz_ahbibi2(&x);
		x.mlx_ptr = mlx_init();
		x.win_ptr = mlx_new_window(x.mlx_ptr, (x.j + 1) * 50, x.i * 50,
				"so_long");
		xpm_to_image(&x);
		ardlmaydan(&x);
		kolchi(&x);
		mlx_key_hook(x.win_ptr, deal_key_bonus, &x);
		mlx_hook(x.win_ptr, 17, 0, destroy_game, &x);
		mlx_string_put(x.mlx_ptr, x.win_ptr, 100, 3, 0x00, "moves : ");
		mlx_loop(x.mlx_ptr);
	}
}
