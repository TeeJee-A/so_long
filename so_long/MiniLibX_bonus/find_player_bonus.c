/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_player_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataji <ataji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 14:45:22 by ataji             #+#    #+#             */
/*   Updated: 2022/04/02 22:35:08 by ataji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long_bonus.h"

void	find_player_bonus(t_data *data, char **map)
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
