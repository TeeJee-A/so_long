/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx_img_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataji <ataji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 14:00:33 by ataji             #+#    #+#             */
/*   Updated: 2022/04/04 15:40:05 by ataji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long_bonus.h"

void	mlx_xpm_coins(t_data *data)
{
	data->coins = mlx_xpm_file_to_image(data->mlx, "images/coins.xpm", \
		&data->img_length, &data->img_width);
	data->coins1 = mlx_xpm_file_to_image(data->mlx, "images/coins1.xpm", \
		&data->img_length, &data->img_width);
	data->coins2 = mlx_xpm_file_to_image(data->mlx, "images/coins2.xpm", \
		&data->img_length, &data->img_width);
	data->coins3 = mlx_xpm_file_to_image(data->mlx, "images/coins3.xpm", \
		&data->img_length, &data->img_width);
	data->coins4 = mlx_xpm_file_to_image(data->mlx, "images/coins4.xpm", \
		&data->img_length, &data->img_width);
}

void	mlx_img_bonus(t_data *data)
{
	data->player = mlx_xpm_file_to_image(data->mlx, "images/player.xpm", \
		&data->img_length, &data->img_width);
	mlx_xpm_coins(data);
	data->exit = mlx_xpm_file_to_image(data->mlx, "images/exit.xpm", \
		&data->img_length, &data->img_width);
	data->walls = mlx_xpm_file_to_image(data->mlx, "images/walls.xpm", \
		&data->img_length, &data->img_width);
	data->backgroud = mlx_xpm_file_to_image(data->mlx, "images/background.xpm", \
		&data->img_length, &data->img_width);
	data->enemy = mlx_xpm_file_to_image(data->mlx, "images/enemy.xpm", \
		&data->img_length, &data->img_width);
	data->open_exit = mlx_xpm_file_to_image(data->mlx, "images/exit_open.xpm", \
		&data->img_length, &data->img_width);
	data->anim_enemy = mlx_xpm_file_to_image(data->mlx, \
		"images/animation_enemy.xpm", &data->img_length, &data->img_width);
}

void	put_img_coins(t_data *data)
{
	static int	x;

	data->m = 0;
	while (data->m < 10000)
		data->m++;
	if (data->map[data->i][data->j] == 'C' && x % 5 == 0)
		mlx_put_image_to_window(data->mlx, data->mlx_win, data->coins, \
			data->count_xpm, data->i * SIZE_IMG);
	if (data->map[data->i][data->j] == 'C' && x % 5 == 1)
		mlx_put_image_to_window(data->mlx, data->mlx_win, data->coins1, \
			data->count_xpm, data->i * SIZE_IMG);
	if (data->map[data->i][data->j] == 'C' && x % 5 == 2)
		mlx_put_image_to_window(data->mlx, data->mlx_win, data->coins2, \
			data->count_xpm, data->i * SIZE_IMG);
	data->m = 0;
	while (data->m < 10000)
		data->m++;
	if (data->map[data->i][data->j] == 'C' && x % 5 == 3)
		mlx_put_image_to_window(data->mlx, data->mlx_win, data->coins3, \
			data->count_xpm, data->i * SIZE_IMG);
	if (data->map[data->i][data->j] == 'C' && x % 5 == 4)
		mlx_put_image_to_window(data->mlx, data->mlx_win, data->coins4, \
			data->count_xpm, data->i * SIZE_IMG);
	x++;
}

void	put_img_bonus(t_data *data)
{
	if (data->map[data->i][data->j] == '1')
		mlx_put_image_to_window(data->mlx, data->mlx_win, data->walls, \
			data->count_xpm, data->i * SIZE_IMG);
	if (data->map[data->i][data->j] == 'P')
		mlx_put_image_to_window(data->mlx, data->mlx_win, data->player, \
			data->count_xpm, data->i * SIZE_IMG);
	if (data->map[data->i][data->j] == '0')
		mlx_put_image_to_window(data->mlx, data->mlx_win, \
			data->backgroud, data->count_xpm, data->i * SIZE_IMG);
	if (data->map[data->i][data->j] == 'E')
		mlx_put_image_to_window(data->mlx, data->mlx_win, data->exit, \
			data->count_xpm, data->i * SIZE_IMG);
	put_img_coins(data);
	if (data->map[data->i][data->j] == 'L')
		mlx_put_image_to_window(data->mlx, data->mlx_win, data->enemy, \
			data->count_xpm, data->i * SIZE_IMG);
	if (data->c == data->collected && data->map[data->i][data->j] == 'E')
		mlx_put_image_to_window(data->mlx, data->mlx_win, data->open_exit, \
			data->count_xpm, data->i * SIZE_IMG);
}

int	mlx_push_img_to_window_bonus(t_data *data)
{
	char	*str;

	if (data->mlx_win == NULL)
		write_error("Window closed\n");
	data->i = 0;
	while (data->map[data->i])
	{
		data->j = 0;
		data->count_xpm = 0;
		while (data->map[data->i][data->j])
		{
			put_img_bonus(data);
			data->j++;
			data->count_xpm += 50;
		}
		data->i++;
	}
	str = ft_itoa(data->count_move);
	mlx_string_put(data->mlx, data->mlx_win, \
		20, 20, 0x2d2926, str);
	free(str);
	return (0);
}
