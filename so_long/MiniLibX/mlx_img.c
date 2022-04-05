/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx_img.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataji <ataji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 02:10:07 by ataji             #+#    #+#             */
/*   Updated: 2022/04/02 14:32:53 by ataji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	mlx_img(t_data *data)
{
	data->player = mlx_xpm_file_to_image(data->mlx, "images/player.xpm", \
		&data->img_length, &data->img_width);
	data->coins = mlx_xpm_file_to_image(data->mlx, "images/coins.xpm", \
		&data->img_length, &data->img_width);
	data->exit = mlx_xpm_file_to_image(data->mlx, "images/exit.xpm", \
		&data->img_length, &data->img_width);
	data->walls = mlx_xpm_file_to_image(data->mlx, "images/walls.xpm", \
		&data->img_length, &data->img_width);
	data->backgroud = mlx_xpm_file_to_image(data->mlx, "images/background.xpm", \
		&data->img_length, &data->img_width);
}

void	put_img(t_data *data)
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
	if (data->map[data->i][data->j] == 'C')
		mlx_put_image_to_window(data->mlx, data->mlx_win, data->coins, \
					data->count_xpm, data->i * SIZE_IMG);
}

int	mlx_push_img_to_window(t_data *data)
{
	if (data->mlx_win == NULL)
		write_error("Window closed\n");
	data->i = 0;
	while (data->map[data->i])
	{
		data->j = 0;
		data->count_xpm = 0;
		while (data->map[data->i][data->j])
		{
			put_img(data);
			data->j++;
			data->count_xpm += 50;
		}
		data->i++;
	}
	return (0);
}
