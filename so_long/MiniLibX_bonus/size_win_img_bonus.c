/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   size_win_img_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataji <ataji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 08:23:17 by ataji             #+#    #+#             */
/*   Updated: 2022/04/03 15:43:45 by ataji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long_bonus.h"

int	ft_string_len_bonus(char *string)
{
	int	i;

	i = 0;
	while (string[i])
		i++;
	return (i);
}

void	size_win_img_bonus(t_data *data, char *file)
{
	data->img_width = SIZE_IMG;
	data->img_length = SIZE_IMG;
	data->win_length = (ft_string_len_bonus(data->map[0]) - 1) * SIZE_IMG;
	data->win_width = count_line(file) * SIZE_IMG;
}
