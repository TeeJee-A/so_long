/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   size_win_img.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataji <ataji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 16:51:08 by ataji             #+#    #+#             */
/*   Updated: 2022/04/02 08:22:57 by ataji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	ft_string_len(char *string)
{
	int	i;

	i = 0;
	while (string[i])
		i++;
	return (i);
}

void	size_win_img(t_data *data, char *file)
{
	data->img_width = SIZE_IMG;
	data->img_length = SIZE_IMG;
	data->win_length = (ft_string_len(data->map[0]) - 1) * SIZE_IMG;
	data->win_width = count_line(file) * SIZE_IMG;
}
