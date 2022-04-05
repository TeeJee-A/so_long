/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataji <ataji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 00:08:14 by ataji             #+#    #+#             */
/*   Updated: 2022/04/02 14:23:32 by ataji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# include <mlx.h>
# include "get_next_line/get_next_line.h"
# include "printf/ft_printf.h"

# define SIZE_IMG 50

typedef struct s_data
{
	char	**map;
	char	*line;
	int		fd;
	int		i;
	int		j;
	int		k;
	int		count_xpm;
	int		count;
	int		e;
	int		p;
	int		c;
	int		collected;
	int		p_i;
	int		p_j;
	int		length;
	int		img_width;
	int		win_width;
	int		win_length;
	int		img_length;
	int		count_move;
	int		can_exit;
	void	*mlx;
	void	*mlx_win;
	void	*backgroud;
	void	*player;
	void	*coins;
	void	*walls;
	void	*exit;
	void	*param;
}t_data;

void	write_error(char *str);
int		count_line(char *file);
char	**alloc_map(t_data *data, int count, char *file);
void	check_format_map(t_data *data, char **map);
int		check_name_map(char *file);
void	check_walls_map(t_data *data, char **map);
void	check_right_left_walls(t_data *data, char **map);
void	check_characters(t_data *data, char **map);
void	check_param(t_data *data, char **map);
void	find_player(t_data *data, char **map);
void	size_win_img(t_data *data, char *file);
int		ft_string_len(char *string);
void	ft_mlx_init(t_data *data);
void	mlx_img(t_data *data);
int		mlx_push_img_to_window(t_data *data);
void	move_player(t_data *data, int keycode);
int		keypress(int keycode, t_data *data);
void	mlx_while(t_data *data);
int		check_next_pos(t_data *data, int pos, char next);
void	count_collected(t_data *data, int pos);
void	win_game(t_data *data);
void	my_free(char **tab);
void	destroy_images(t_data *data);

#endif