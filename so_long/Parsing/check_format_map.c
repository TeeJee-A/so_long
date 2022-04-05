/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_format_map.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataji <ataji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 17:47:19 by ataji             #+#    #+#             */
/*   Updated: 2022/04/03 15:44:11 by ataji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	check_format_map(t_data *data, char **map)
{
	data->i = 0;
	data->count = ft_strlen(map[data->i]);
	while (map[data->i + 1])
	{
		if (ft_strlen(map[data->i]) != data->count)
			write_error("warning : map isn't rectangular\n");
		data->i++;
	}
	if (ft_strlen(map[data->i]) != data->count - 1)
		write_error("warning : map isn't rectangular\n");
}
