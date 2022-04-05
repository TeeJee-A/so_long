/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keypress.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataji <ataji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 23:00:11 by ataji             #+#    #+#             */
/*   Updated: 2022/04/02 14:22:43 by ataji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	keypress(int keycode, t_data *data)
{
	if (keycode == 53)
		exit(1);
	else if (keycode == 0)
		move_player(data, keycode);
	else if (keycode == 1)
		move_player(data, keycode);
	else if (keycode == 2)
		move_player(data, keycode);
	else if (keycode == 13)
		move_player(data, keycode);
	return (0);
}

void	move_player(t_data *data, int keycode)
{
	if (check_next_pos(data, keycode, '1') == 0
		|| (check_next_pos(data, keycode, 'E') == 0 && data->can_exit == 0))
		return ;
	count_collected(data, keycode);
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
	ft_printf("move count for player : %d\n", data->count_move);
	win_game(data);
	data->map[data->p_i][data->p_j] = 'P';
}

int	handl_keyrelease(t_data *data)
{
	mlx_destroy_window(data->mlx, data->mlx_win);
	data->mlx_win = NULL;
	return (0);
}

void	mlx_while(t_data *data)
{
	mlx_loop_hook(data->mlx, &mlx_push_img_to_window, data);
	mlx_hook(data->mlx_win, 2, 1L, &keypress, data);
	mlx_hook(data->mlx_win, 17, 1L, &handl_keyrelease, data);
	mlx_loop(data->mlx);
}
