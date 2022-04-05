/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx_init.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataji <ataji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 01:45:22 by ataji             #+#    #+#             */
/*   Updated: 2022/04/01 13:22:12 by ataji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_mlx_init(t_data *data)
{
	data->mlx = mlx_init();
	if (data->mlx == NULL)
		write_error("warning : mlx can't establish a connection \
to the correct graphical system");
	data->mlx_win = mlx_new_window(data->mlx, data->win_length, \
		data->win_width, "so_long");
	if (data->mlx_win == NULL)
	{
		free(data->mlx_win);
		write_error("warning : can't open window");
	}
}
