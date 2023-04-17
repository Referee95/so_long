/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhalil- <ykhalil-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 10:29:54 by ykhalil-          #+#    #+#             */
/*   Updated: 2023/04/17 02:37:58 by ykhalil-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void newline_error(t_main *x)
{
	int i;
	
	i = 0;
	while (x->star[i])
		i++;      
	if (x->star[i - 1] == '\n')
	{
		free(x->star);
		werror(x);
	}
}

char	**read_all(t_main *x)
{
	int		fd;
	char	**stora;

	fd = open("map.ber", O_RDONLY);
	x->star = NULL;
	x->starwhd = get_next_line(fd);
	if (!x->starwhd)
		werror(x);
	while (x->starwhd != NULL)
	{
		if (x->starwhd[0] == '\n')
		{				
			free(x->starwhd);
			free(x->star);
			werror(x);
		}
		x->star = ft_strjoin(x->star, x->starwhd);
		free(x->starwhd);
		x->starwhd = get_next_line(fd);
	}
	newline_error(x);
	stora = ft_split(x->star, '\n');
	free(x->star);
	return (stora);
}

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		str[i] = (char)c;
		i++;
	}
	return (str);
}

void	ft_free(char **arr)
{
	int	i;

	i = -1;
	while (arr[++i])
		free(arr[i]);
	free(arr);
}

int	main(int ac, char **av)
{
	t_main	*x;

	if (ac == 2)
	{
		(void)av;
		x = malloc(sizeof(t_main));
		x->stora = read_all(x);
		x->str = read_all(x);
		x->ptr = read_all(x);
		errors(av, x);
	
		pl_posit(x);
		check_path(x, x->ipo, x->jpo);
		check_path2(x, x->ipo, x->jpo);
		doz_ahbibi(x);
		doz_ahbibi2(x);	
		ft_free(x->stora);
		ft_free(x->ptr);
		ft_free(x->str);
		free(x);
		// x->mlx_ptr = mlx_init();
		// x->win_ptr = mlx_new_window(x->mlx_ptr, (x->j + 1) * 50, x->i * 50,
		// 		"khalil lqwada");
		// xpm_to_image(x);
		// ardlmaydan(x);
		// kolchi(x);
		// mlx_key_hook(x->win_ptr, deal_key, x);
		// mlx_hook(x->win_ptr, 17, 0, destroy_game, x);
		// ft_free2(x);
		// mlx_loop(x->mlx_ptr);
		// while(1);
	}
}
