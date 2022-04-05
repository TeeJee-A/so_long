/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataji <ataji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 13:59:01 by ataji             #+#    #+#             */
/*   Updated: 2022/04/04 15:36:54 by ataji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_BONUS_H
# define SO_LONG_BONUS_H
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
	int		count_xpm;
	int		count;
	int		count_line;
	int		e;
	int		p;
	int		c;
	int		l;
	int		m;
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
	void	*coins1;
	void	*coins2;
	void	*coins3;
	void	*coins4;
	void	*walls;
	void	*exit;
	void	*enemy;
	void	*open_exit;
	void	*anim_enemy;
	void	*param;
}t_data;

void	write_error(char *str);
int		count_line(char *file);
char	**alloc_map(t_data *data, int count, char *file);
void	check_format_map(t_data *data, char **map);
int		check_name_map(char *file);
void	check_walls_map(t_data *data, char **map);
void	check_right_left_walls(t_data *data, char **map);
void	check_characters_bonus(t_data *data, char **map);
void	check_param_bonus(t_data *data, char **map);
void	find_player_bonus(t_data *data, char **map);
void	size_win_img_bonus(t_data *data, char *file);
int		ft_string_len_bonus(char *string);
void	ft_mlx_init_bonus(t_data *data);
void	mlx_img_bonus(t_data *data);
int		mlx_push_img_to_window_bonus(t_data *data);
void	put_img_bonus(t_data *data);
void	move_player_bonus(t_data *data, int keycode);
int		keypress_bonus(int keycode, t_data *data);
void	mlx_while_bonus(t_data *data);
int		check_next_pos_bonus(t_data *data, int pos, char next);
void	count_collected_bonus(t_data *data, int pos);
void	win_game_bonus(t_data *data);
void	my_free_bonus(char **tab);
void	destroy_images_bonus(t_data *data);
int		handl_keyrelease_bonus(t_data *data);
void	lose_game(t_data *data);
char	*ft_itoa(int n);

#endif