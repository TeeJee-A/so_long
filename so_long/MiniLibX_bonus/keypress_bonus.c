/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keypress_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataji <ataji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 14:25:38 by ataji             #+#    #+#             */
/*   Updated: 2022/04/03 15:42:42 by ataji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long_bonus.h"

int	keypress_bonus(int keycode, t_data *data)
{
	if (keycode == 53)
		exit(1);
	else if (keycode == 0)
		move_player_bonus(data, keycode);
	else if (keycode == 1)
		move_player_bonus(data, keycode);
	else if (keycode == 2)
		move_player_bonus(data, keycode);
	else if (keycode == 13)
		move_player_bonus(data, keycode);
	return (0);
}

void	lose_game(t_data *data)
{
	if (data->map[data->p_i][data->p_j] == 'L')
	{
		mlx_destroy_window(data->mlx, data->mlx_win);
		data->mlx_win = NULL;
		write_error("you lose\n");
	}
}

void	move_player_bonus(t_data *data, int keycode)
{
	if (check_next_pos_bonus(data, keycode, '1') == 0
		|| (check_next_pos_bonus(data, keycode, 'E') == 0
			&& data->can_exit == 0))
		return ;
	count_collected_bonus(data, keycode);
	if (data->c == data->collected)
		data->can_exit = 1;
	data->map[data->p_i][data->p_j] = '0';
	data->count_move++;
	if (keycode == 0)
		data->p_j--;
	else if (keycode == 1)
		data->p_i++;
	else if (keycode == 2)
		data->p_j++;
	else if (keycode == 13)
		data->p_i--;
	lose_game(data);
	win_game_bonus(data);
	data->map[data->p_i][data->p_j] = 'P';
}

int	handl_keyrelease_bonus(t_data *data)
{
	mlx_destroy_window(data->mlx, data->mlx_win);
	data->mlx_win = NULL;
	return (0);
}

void	mlx_while_bonus(t_data *data)
{
	mlx_loop_hook(data->mlx, &mlx_push_img_to_window_bonus, data);
	mlx_hook(data->mlx_win, 2, 1L, &keypress_bonus, data);
	mlx_hook(data->mlx_win, 17, 1L, &handl_keyrelease_bonus, data);
	mlx_loop(data->mlx);
}
