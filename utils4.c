/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhalil- <ykhalil-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 00:07:22 by ykhalil-          #+#    #+#             */
/*   Updated: 2023/04/20 02:07:16 by ykhalil-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

char	**read_all(t_main *x, char *av)
{
	int		fd;
	char	**stora;

	fd = open(av, O_RDONLY);
	x->star = NULL;
	x->starwhd = get_next_line(fd);
	if (!x->starwhd)
		werror();
	while (x->starwhd != NULL)
	{
		if (x->starwhd[0] == '\n')
		{
			free(x->starwhd);
			free(x->star);
			werror();
		}
		x->star = ft_strjoin(x->star, x->starwhd);
		free(x->starwhd);
		x->starwhd = get_next_line(fd);
	}
	newline_error(x);
	stora = ft_split(x->star, '\n');
	free(x->starwhd);
	free(x->star);
	return (stora);
}

void	newline_error(t_main *x)
{
	int	i;

	i = 0;
	while (x->star[i])
		i++;
	if (x->star[i - 1] == '\n')
	{
		free(x->star);
		werror();
	}
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
