/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_characters_bonus.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataji <ataji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 14:16:29 by ataji             #+#    #+#             */
/*   Updated: 2022/04/02 08:41:45 by ataji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long_bonus.h"

void	check_characters_bonus(t_data *data, char **map)
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
						&& map[data->i][data->j] != 'L'
							&& map[data->i][data->j] != '\n')
				write_error("warning : wrong characters\n");
			data->j++;
		}
		data->i++;
	}
}

void	check_param_bonus(t_data *data, char **map)
{
	data->i = 0;
	data->p = 0;
	data->c = 0;
	data->e = 0;
	data->l = 0;
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
			if (map[data->i][data->j] == 'L')
				data->l++;
			data->j++;
		}
		data->i++;
	}
	if (data->p != 1 || data->e == 0 || data->c == 0 || data->l == 0)
		write_error("warning : wrong characters\n");
}
