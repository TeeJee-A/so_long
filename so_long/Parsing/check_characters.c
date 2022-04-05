/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_characters.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataji <ataji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 17:46:29 by ataji             #+#    #+#             */
/*   Updated: 2022/04/01 14:15:58 by ataji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	check_characters(t_data *data, char **map)
{
	data->i = 0;
	while (map[data->i])
	{
		data->j = 0;
		while (map[data->i][data->j])
		{
			if (map[data->i][data->j] != 'P' && map[data->i][data->j] != 'E'
				&& map[data->i][data->j] != 'C' && map[data->i][data->j] != '1'
					&& map[data->i][data->j] != '0'
						&& map[data->i][data->j] != '\n')
				write_error("warning : wrong characters\n");
			data->j++;
		}
		data->i++;
	}
}

void	check_param(t_data *data, char **map)
{
	data->i = 0;
	data->p = 0;
	data->c = 0;
	data->e = 0;
	while (map[data->i])
	{
		data->j = 0;
		while (map[data->i][data->j])
		{
			if (map[data->i][data->j] == 'P')
				data->p++;
			if (map[data->i][data->j] == 'E')
				data->e++;
			if (map[data->i][data->j] == 'C')
				data->c++;
			data->j++;
		}
		data->i++;
	}
	if (data->p != 1 || data->e == 0 || data->c == 0)
		write_error("warning : wrong characters\n");
}
