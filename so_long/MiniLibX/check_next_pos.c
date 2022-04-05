/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_next_pos.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataji <ataji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 17:07:21 by ataji             #+#    #+#             */
/*   Updated: 2022/03/30 17:17:11 by ataji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	check_next_pos(t_data *data, int pos, char next)
{
	if ((pos == 0 && data->map[data->p_i][data->p_j - 1] == next)
		|| (pos == 1 && data->map[data->p_i + 1][data->p_j] == next)
			|| (pos == 2 && data->map[data->p_i][data->p_j + 1] == next)
				|| (pos == 13 && data->map[data->p_i - 1][data->p_j] == next))
		return (0);
	return (1);
}

void	count_collected(t_data *data, int pos)
{
	if ((pos == 0 && data->map[data->p_i][data->p_j - 1] == 'C')
		|| (pos == 1 && data->map[data->p_i + 1][data->p_j] == 'C')
			|| (pos == 2 && data->map[data->p_i][data->p_j + 1] == 'C')
				|| (pos == 13 && data->map[data->p_i - 1][data->p_j] == 'C'))
		data->collected++;
}
