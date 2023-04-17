/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhalil- <ykhalil-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 23:15:36 by ykhalil-          #+#    #+#             */
/*   Updated: 2023/04/17 02:35:38 by ykhalil-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	werror(t_main *x)
{
	write(2, "Error\n", 6);
	free(x);
	exit(1);
}

void	ft_strcmp(char *s1, char *s2, t_main *x)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			werror2(x);
		i++;
	}
}

void	error(char **av, t_main *x)
{
	int	i;
	
	i = ft_strlen(av[1]);
	ft_strcmp(&av[1][i - 4], ".ber", x);
}

void	error2(t_main *x)
{
	int	i;
	int	j;

	i = 0;
	while (x->stora[i])
	{
		j = 0;
		while (x->stora[i][j])
		{
			if (x->stora[i][j] != '1' && x->stora[i][j] != '0' && x->stora[i][j] != 'P'
				&& x->stora[i][j] != 'E' && x->stora[i][j] != 'C')
				werror2(x);
			j++;
		}
		i++;
	}
}

void	error3(t_main *x)
{
	int	i;

	i = 0;
	while (x->stora[i])
	{
		if (ft_strlen(x->stora[0]) != ft_strlen(x->stora[i]))
			werror2(x);
		i++;
	}
}
