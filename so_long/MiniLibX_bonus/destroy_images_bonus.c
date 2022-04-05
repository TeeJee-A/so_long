/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy_images_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataji <ataji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 14:42:25 by ataji             #+#    #+#             */
/*   Updated: 2022/04/03 15:52:03 by ataji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long_bonus.h"

void	destroy_images_bonus(t_data *data)
{
	mlx_destroy_image(data->mlx, data->walls);
	mlx_destroy_image(data->mlx, data->player);
	mlx_destroy_image(data->mlx, data->exit);
	mlx_destroy_image(data->mlx, data->open_exit);
	mlx_destroy_image(data->mlx, data->coins);
	mlx_destroy_image(data->mlx, data->coins1);
	mlx_destroy_image(data->mlx, data->coins2);
	mlx_destroy_image(data->mlx, data->coins3);
	mlx_destroy_image(data->mlx, data->coins4);
	mlx_destroy_image(data->mlx, data->backgroud);
	mlx_destroy_image(data->mlx, data->enemy);
}
