/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_walls.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataji <ataji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 17:45:03 by ataji             #+#    #+#             */
/*   Updated: 2022/04/03 15:44:28 by ataji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	check_walls_map(t_data *data, char **map)
{
	data->i = 0;
	data->j = 0;
	while (map[data->i][data->j] != '\n')
	{
		if (map[data->i][data->j] != '1')
			write_error("warning : up wall\n");
		data->j++;
	}
	data->j = 0;
	while (map[data->i + 1])
		data->i++;
	while (map[data->i][data->j])
	{
		if (map[data->i][data->j] != '1')
			write_error("warning : down walls\n");
		data->j++;
	}
}

void	check_right_left_walls(t_data *data, char **map)
{
	data->i = 0;
	data->j = 0;
	while (map[data->i])
	{
		if (map[data->i][0] != '1')
			write_error("warning : left walls\n");
		data->i++;
	}
	data->i = 0;
	while (map[data->i][data->j] != '\n')
		data->j++;
	while (map[data->i])
	{
		if (map[data->i][data->j - 1] != '1')
			write_error("warning : right walls\n");
		data->i++;
	}
}
