/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhalil- <ykhalil-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 00:06:05 by ykhalil-          #+#    #+#             */
/*   Updated: 2023/05/05 15:23:05 by ykhalil-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_BONUS_H
# define SO_LONG_BONUS_H

# include <fcntl.h>
# include <mlx.h>
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

# define KEY_W 13
# define KEY_A 0
# define KEY_S 1
# define KEY_D 2
# define KEY_ESC 53

typedef struct s_main
{
	int		i;
	int		j;
	int		x;
	int		y;
	int		z;
	int		ipo;
	int		jpo;
	int		toul;
	int		l3ard;
	void	*mlx_ptr;
	void	*win_ptr;
	char	**stora;
	char	**str;
	char	**ptr;
	char	*star;
	char	*starwhd;
	void	*ptr_e;
	void	*ptr_p;
	void	*ptr_c;
	void	*ptr_0;
	void	*ptr_1;
	int		xpo;
	int		ypo;
	int		collect;
	int		moves;
}			t_main;

char		*ft_line(char *line);
int			ft_strnlen(char *line);
char		*ft_etc(char *line);
char		*ft_strjoin(char *str, char *str1);
int			ft_strlen(char *line);
char		*get_next_line(int fd);
char		*problem(char *str);
char		*line_readed(int fd, char *etc);
int			newline(char *line);
char		**ft_split(char const *s, char c);
void		ft_bzero(void *s, size_t n);
void		*ft_memset(void *b, int c, size_t len);
int			ft_putstr(char *s);
int			ft_putnbr(long int n);
int			ft_putchar(char c);
int			ft_printf(const char *s, ...);
void		werror(void);
void		werror2(t_main *x);
char		**read_all(t_main *x, char *av);
void		ft_strcmp(char *s1, char *s2, t_main *x);
void		error(char **av, t_main *x);
void		error2(t_main *x);
void		error3(t_main *x);
void		error4(t_main *x);
void		error5(t_main *x);
void		error6(t_main *x);
void		errors(char **av, t_main *x);
void		xpm_to_image(t_main *x);
void		ardlmaydan(t_main *x);
void		kolchi(t_main *x);
int			pl_posit(t_main *x);
void		ft_move_w_bonus(t_main *x);
void		ft_move_s_bonus(t_main *x);
void		ft_move_a_bonus(t_main *x);
void		ft_move_d_bonus(t_main *x);
int			deal_key_bonus(int key, t_main *x);
int			destroy_game(t_main *x);
void		valid_path(t_main *x);
void		valid_path2(t_main *x);
void		check_path(t_main *x, int a, int b);
void		check_path2(t_main *x, int a, int b);
void		valid_path(t_main *x);
void		ft_free(char **arr);
void		ft_free2(t_main *x);
void		image_error(t_main *x);
void		image_error2(t_main *x);
void		map_free(t_main *x);
void		newline_error(t_main *x);
char		*ft_itoa(int n);
char		*memnumber(long long n, char *str, size_t len);
size_t		ft_len(long long number);
void		ft_put_str_win(t_main *x);

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 100
# endif

#endif