/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alloc_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataji <ataji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 17:49:24 by ataji             #+#    #+#             */
/*   Updated: 2022/04/02 13:26:43 by ataji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

char	**alloc_map(t_data *data, int count, char *file)
{
	data->fd = open(file, O_RDONLY);
	if (!data->fd)
		return (NULL);
	data->map = malloc(sizeof(char *) * (count + 1));
	if (!data->map)
		return (NULL);
	data->i = 0;
	while (data->i < count)
		data->map[data->i++] = get_next_line(data->fd);
	data->map[data->i] = NULL;
	close(data->fd);
	return (data->map);
}
