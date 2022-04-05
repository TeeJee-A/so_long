/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_player.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataji <ataji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 17:16:35 by ataji             #+#    #+#             */
/*   Updated: 2022/03/30 17:22:56 by ataji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	find_player(t_data *data, char **map)
{
	data->can_exit = 0;
	data->p_i = 0;
	while (map[data->p_i])
	{
		data->p_j = 0;
		while (map[data->p_i][data->p_j] && map[data->p_i][data->p_j] != '\n')
		{
			if (map[data->p_i][data->p_j] == 'P')
				return ;
			data->p_j++;
		}
		data->p_i++;
	}
}
