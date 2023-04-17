/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhalil- <ykhalil-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 10:00:38 by ykhalil-          #+#    #+#             */
/*   Updated: 2023/03/17 10:27:00 by ykhalil-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

char	*ft_etc(char *line)
{
	char	*str;
	int		i;
	int		j;

	i = ft_strnlen(line) - 1;
	j = 0;
	while (line[++i])
		j++;
	if (!j)
	{
		free(line);
		return (0);
	}
	str = malloc(j + 1);
	if (!str)
		return (0);
	i = i - j;
	j = 0;
	while (line[i])
		str[j++] = line[i++];
	str[j] = '\0';
	free(line);
	return (str);
}

int	ft_strlen(char *line)
{
	int	i;

	i = 0;
	while (line[i])
		i++;
	return (i);
}

char	*problem(char *str)
{
	str = malloc(1);
	str[0] = '\0';
	return (str);
}

char	*ft_strjoin(char *str, char *str1)
{
	int		i;
	int		j;
	char	*src;

	i = -1;
	j = 0;
	if (!str)
		str = problem(str);
	src = malloc(ft_strlen(str) + ft_strlen(str1) + 1);
	if (!src)
		return (0);
	while (str[++i] != '\0')
		src[i] = str[i];
	while (str1[j] != '\0')
		src[i++] = str1[j++];
	src[i] = '\0';
	if (i == 0)
	{
		free(src);
		free(str);
		return (0);
	}
	src[i] = '\0';
	free(str);
	return (src);
}
